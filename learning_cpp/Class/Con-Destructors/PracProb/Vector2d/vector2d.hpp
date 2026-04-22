#pragma once

#include <iostream>
#include <memory>
#include "point.hpp"

class Vector2D {
private:
	double dx_;
	double dy_;

public:
	Vector2D(double dx, double dy): dx_(dx), dy_(dy) {
		std::cout << "Vector2D created (" << dx << ", " << dy << ")" << std::endl;
	}

	~Vector2D() {
		std::cout << "Vector2D destroyed" << std::endl;
	}

	double getDX () const { return dx_; }
	double getDY () const { return dy_; }

	friend std::ostream& operator<<(std::ostream& os, const Vector2D& v) {
		os << "Vector2D(" << v.getDX() << ", " << v.getDY() << ")";
		return os;
	}

	Vector2D operator+(Vector2D& other) const {
		return Vector2D(getDX() + other.getDX(), getDY() + other.getDY());
	}

	bool operator==(Vector2D& other) const {
		return getDX() == other.getDX() && getDY() == other.getDY();
	}

	void apply(Point *p) {
		double new_x = p -> getX() + getDX();
		double new_y = p -> getY() + getDY();
		p -> set(new_x, new_y);
		std::cout << "Point moved to (" << new_x << ", " 
			  << new_y << ")" << std::endl;
	}

};
