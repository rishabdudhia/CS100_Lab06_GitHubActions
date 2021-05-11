#include "../header/rectangle.hpp"

Rectangle::Rectangle() : width(1), height(1) {}

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
	this->height = h;
	this->width = w;
}

int Rectangle::perimeter() {
    return (2*this->width) + (2*this->height);
}

