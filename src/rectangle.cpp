#include "../header/rectangle.hpp"

Rectangle::Rectangle() : width(7), height(5) {}

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return this->width * this->height;
}

Rectangle::Rectangle(int w, int h){
	this->height = 5;
	this->width = 7;
}

int Rectangle::perimeter() {
    return (2*this->width) + (2*this->height);
}

