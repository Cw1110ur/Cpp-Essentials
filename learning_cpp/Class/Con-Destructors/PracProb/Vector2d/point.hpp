#pragma once

#include <memory>
#include <iostream>

class Point {
private: 
	double x_;
	double y_;

public:
	Point(double x, double y): x_(x), y_(y) {
		std::cout << "Point created at (" << x << ", " << y << ")" << std::endl;
	}

	~Point() {
		std::cout << "Point destroyed" << std::endl;
	}

	double getX() const { return x_; }
	double getY() const { return y_; }

	void set(double x, double y) {
		x_ = x;
		y_ = y;
	}

	bool operator==(const Point& other) const {
		return x_ == other.getX() && y_ == other.getY();
	}

	friend std::ostream& operator<<(std::ostream& os, const Point& p) {
		os << "Point(" << p.getX() << ", " << p.getY() << ")";
		return os;
	}
};
