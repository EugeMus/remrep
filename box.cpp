#include "box.h"
#include <iostream>

double box::get_length() const {
	return length;
}
double box::get_width() const{
	return width;
}
double box::get_height() const{
	return height;
}
void box::set_length(double a){
	length =a;
}
void box::set_width(double a){
	width = a;
}
void box::set_height(double a){
	height = a;
}
const box& box::operator=(const box& a){
	length = a.length;
	width = a.width;
	height = a.height;
	std::cout<<"assignment operator was called"<<std::endl;
	return *this;
}
box::box(){
	width = length = height = 0.66;
}
box::box(double a){
	width = length = height = a;
}
box::box(double a, double b){
	width = length = a;
	height = b;
}
box::box(double a, double b, double c){
	length = a;
	width = b;
	height = c;
}
box::~box(){
	std::cout<<"Destructor was called"<<std::endl;
}
box::box(const box& a){
	length = a.length;
	width = a.width;
	height = a.height;
	std::cout<<"copy constructor was called"<<std::endl;
}
double box::area() const {
	return 2*length*height + 2*width*height + length*width;
}
