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
	length = a;
}
void box::set_width(double a){
	width = a;
}
void box::set_height(double a){
	height = a;
}
const box& box::operator=(const box& a) {
	length = a.length;
	width = a.width;
	height = a.height;
	std::cout<<"assignment operator was called"<<std::endl;
	return *this;
}
box& box::operator++ () {
	length = length + 1;
	width = width + 1;
	height = height + 1;
	return *this;
}
box box::operator++(int) {
	box temp(*this);
	length = length + 1;
	width = width + 1;
	height = height + 1;
	return temp;
}
box& box::operator--() {
	length = length - 1;// check value later
	width = width - 1;
	height = height - 1;
	return *this;
}
box box::operator-- (int){
	box temp(*this);
	length = length - 1;//check value later 
	width = width - 1;
	height = height - 1;
	return temp;
}

box operator+ (const box& a, const box& b) {
	box c(a.length + b.length, a.width + b.width, a.height + b.height);
	return c;
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

double Wbox::get_w_width() const {
	return W_width;
}
double Wbox::get_w_height() const {
	return W_height;
}

void Wbox::set_w_width(double a) {
	W_width = a;
}

void Wbox::set_w_height(double a) {
	W_height = a;
}

Wbox::Wbox(): box() {
	W_width = W_height = 0.33;
}

Wbox::Wbox(double a): box(a) {
	W_width = W_height = a/3;
}

Wbox::Wbox(double a, double b): box(a,b) {
	W_width = a/3;
	W_height = b/3;
}

Wbox::Wbox(double a, double b, double c): box(a,b,c) {
	W_width = b/3;
	W_height = c/3;
}

Wbox::Wbox(double a, double b, double c, double d): box(a,b,c) {
	W_width = W_height = d;
}

Wbox::Wbox(double a, double b, double c, double d, double e): box(a,b,c) {
	W_width = d;
	W_height = e;
}

Wbox::Wbox(const Wbox& a) {
	length = a.length;
	width = a.width;
	height = a.height;
	W_width = a.W_width;
	W_height = a.W_height;
	std::cout<<"copy Wbox constructor was called"<<std::endl;
}

const Wbox& Wbox::operator= (const Wbox& a) {
	length = a.length;
	width = a.width;
	height = a.height;
	W_width = a.W_width;
	W_height = a.W_height;
	std::cout<<"assignment Wbox operator was called"<<std::endl;
	return *this;
}


Wbox::~Wbox(){
	std::cout<<"Wbox destructor wascalled"<<std::endl;
}

double Wbox::area() const {
	return 2*length*height + 2*width*height + length*width - W_width*W_height;
}
