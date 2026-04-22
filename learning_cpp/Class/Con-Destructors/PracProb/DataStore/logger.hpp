#pragma once
#include <memory>
#include <iostream>
#include <vector>
#include <string>

class Logger {
private:
	std::vector<std::string> messages;

public:
	Logger() {
		std::cout << "Logger started" << std::endl;
	}

	~Logger() {
		std::cout << "Logger stopped" << std::endl;
	}

	void log(std::string message) {
		log.push_back(message);
		std::cout << "[LOG] " << message << std::endl;
	}

	void printAll() {
		int count = 1;
		for (auto it = log.begin(); it != log.end(); ++it) {
			std::cout << count << " [LOG] " << *it << std::endl;
			count++;
		}
	}

	friend std::ostream& operator<<(std::ostream& os, Logger& l) {
		os << "Logger(" << l.messages.size() << " messages)"; 
	}
};
