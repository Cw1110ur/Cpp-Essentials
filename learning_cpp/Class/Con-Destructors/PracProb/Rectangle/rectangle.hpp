#pragma once
#include <ostream>
#include "point.hpp"

class Rectangle {
    Point corner_;
    double w_;
    double h_;

public:
    Rectangle() : corner_(Point()), w_(0), h_(0) {}

    Rectangle(double x, double y, double w, double h)
        : corner_(Point(x, y)), w_(w), h_(h) {}

    // returns pointer so caller can modify the actual corner
    Point* getCorner() {
        return &corner_;
    }

    double getWidth() const { return w_; }
    double getHeight() const { return h_; }

    friend std::ostream& operator<<(std::ostream& os, const Rectangle& r) {
        return os << "rect(" << r.corner_ << 
               ", " << r.w_ << ", " << r.h_ << ")";
    }
};
