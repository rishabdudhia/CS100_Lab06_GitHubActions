#include "../header/rectangle.hpp"

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return this->width * this->height;
}

void Rectangle::Rectangle(int w, int h){
	this->height = h;
	this->width = w;
}

int Rectangle::perimeter() {
    return (this->width*this->width) + (this->height*this->height);
}

