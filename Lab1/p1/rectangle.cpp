#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle(double width, double height) {
  this->width = width;
  this->height = height;
}

Rectangle::Rectangle() { this->width = this->height = 0; }

void Rectangle::SetWidth(double value) { this->width = value; }

double Rectangle::GetWidth() { return this->width; }

void Rectangle::SetHeight(double value) { this->height = value; }

double Rectangle::GetHeight() { return this->height; }

double Rectangle::Area() { return this->height * this->width; }

double Rectangle::Perimeter() { return 2.0 * (this->height + this->width); }

Rectangle::~Rectangle() { std::cout << "This destroyed a rectangle object\n"; }
