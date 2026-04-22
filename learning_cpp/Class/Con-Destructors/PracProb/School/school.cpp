#include <iostream>
#include <iterator>
#include <string>
#include <memory>
#include <algorithm>
#include <vector>

class Student {
public:
	std::string name;
	char grade;
	Student(std::string name, char grade) {
		std::cout << "Student " << name << 
			" enrolled with grade " << 
			grade << std::endl;
	}

	~Student() {
		std::cout << "Student " << name << 
			" left the school" << std:: endl;
	}
};

template <class T>
class School {
public:

	School() {}
	~School() {}
	void enroll(std::unique_ptr<T> kid) {}
	void checkGrade(int index()) {}
	void graduate(int index()) {}
	void updateGrade(int index, std::string newGrade) {}
	void printStudents() {}
	int getCount() {}
};
