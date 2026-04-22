#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <memory>

class Player {
public:
    std::string name;
    std::string rank;

    Player(std::string name, std::string rank) {
        this -> name = name;
        this -> rank = rank;
        std::cout << "Player " << name << 
            " joined with " << rank << std::endl;
    }

    ~Player() {
        std::cout << "Player " << name << 
            " left the server" << std::endl;
    }
};

template <class T>
class GameServer {
private:
    std::string name;
    std::vector<std::unique_ptr<T>> names;

public:
    GameServer(std::string name) {
        this -> name = name;
        std::cout << "GameServer " << name <<
            " started" << std::endl;
    }

    ~GameServer() {
        std::cout << "GameServer " << name <<
            " shut down" << std::endl;
    }

    void join(std::unique_ptr<T> player) {
        names.push_back(std::move(player));
    }

    void inspect(int index) {
        if (index < 0 || index >= (int)names.size()) {
            std::cout << "Index does not exist" << std::endl;
            return;
        }

        T* n = names[index].get();
        std::cout << "Player " << n -> name << 
            " is rank " << n -> rank << std::endl;
    }

    void kick(int index) {
        if (index < 0 || index >= (int)names.size()) {
            std::cout << "Index does not exist" << std::endl;
            return;
        }

        std::unique_ptr<T> player = std::move(names[index]);
        std::cout << player -> name << " kicked from server" << std::endl;
        names.erase(names.begin() + index);
    }

    void promote(int index, std::string newRank) {
        if (index < 0 || index >= (int)names.size()) {
            std::cout << "Index does not exist" << std::endl;
            return;
        }

        T* n = names[index].get();
        n -> rank = newRank;
	std::cout << "Player " << n -> name << 
            " is promoted to " << n -> rank << std::endl;
    }

    void printPlayers() {
        int i = 1;
        std::cout << "GameServer: " << name << std::endl;
        for (auto it = names.begin(); it != names.end(); ++it) {
            std::cout << "  " << i << ". " << (*it) -> name << 
                " - " << (*it) -> rank << std::endl;
            i++;
        }
    }

    int getCount() {
        return names.size();
    }
};

int main() {
    GameServer<Player> serv("Arena51");
    serv.join(std::make_unique<Player>("Ninja", "Bronze"));
    serv.join(std::make_unique<Player>("DragonSlayer", "Gold"));
    serv.join(std::make_unique<Player>("ShadowFox", "silver"));
    serv.printPlayers();
    serv.inspect(1);
    serv.kick(0);
    serv.promote(1, "Gold");
    serv.printPlayers();
    std::cout << "Player count: " << 
        serv.getCount() << std::endl;
}
