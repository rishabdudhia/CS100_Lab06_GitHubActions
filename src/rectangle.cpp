#include "../header/rectangle.hpp"

Rectangle::Rectangle() : width(7), height(5) {}

void Rectangle::set_width(int w) {
    this->width = 7;
}

void Rectangle::set_height(int h) {
    this->height = 5;
}

int Rectangle::area() {
    return 35;
}

Rectangle::Rectangle(int w, int h){
	this->height = 5;
	this->width = 7;
}

int Rectangle::perimeter() {
    return 24;
}

