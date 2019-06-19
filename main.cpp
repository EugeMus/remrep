#include <iostream>
#include "box.h"

void get_double_area(box& a) {
	std::cout<<"double area is "<<a.area()*2<<std::endl;
}

int main(){


#ifdef	WBOX_CODE

	Wbox A[6]; 
       	Wbox a0,  a1(2.34), a2(3.45,4.67), a3(23.5,4.57,3.678), a4(34.4,45.45,56.3,56.4),a5(34,56,78,34,777);
	
	A[0] = a0;
	A[1] = a1;
	A[2] = a2;
	A[3] = a3;
	A[4] = a4;
	A[5] = a5;

	for(int i = 0; i<6; i++){
		std::cout<<"Square of Wbox is "<<A[i].area()<<std::endl;
	}
	
	get_double_area(a1);

	a0.set_length(1.23);
	a0.set_width(2.34);
	a0.set_height(3.45);
	a0.set_w_width(1.4);
	a0.set_w_height(0.2);
	a0.get_length();
	a0.get_width();
	a0.get_height();
	a0.get_w_width();
	a0.get_w_height();
	
	std::cout<<"size of Wbox is "<<sizeof(Wbox)<<std::endl;
	std::cout<<"size of int is "<<sizeof(int)<<std::endl;
	std::cout<<"size of double is "<<sizeof(double)<<std::endl;
	std::cout<<"size of long is "<<sizeof(long)<<std::endl;
	std::cout<<"size of char is "<<sizeof(char)<<std::endl;
	std::cout<<"size of int* is "<<sizeof(int*)<<std::endl;
	std::cout<<"size of short is "<<sizeof(short)<<std::endl;
	

	Wbox first(1), second(1), third;
/*	std::cout<<"before ++ first area = "<<first.area()<<" ,seconsd area = "<<second.area()<<std::endl;
	second = ++first;
	std::cout<<"after ++ first area = "<<first.area()<<" ,seconsd area = "<<second.area()<<std::endl;
	second = first++;
	std::cout<<"after ++(int) first area = "<<first.area()<<" ,seconsd area = "<<second.area()<<std::endl;
	second = --first;
	std::cout<<"after -- first area = "<<first.area()<<" ,seconsd area = "<<second.area()<<std::endl;
	second = first--;
	std::cout<<"after -- first area = "<<first.area()<<" ,seconsd area = "<<second.area()<<std::endl;
	third = first + second;
	std::cout<<"after adding first area = "<<first.area()<<" ,seconsd area = "<<second.area()<<" third area = "<<third.area()<<std::endl;*/

#else
	box A[4]; 
       	box a0,  a1(2.34), a2(3.45,4.67), a3(23.5,4.57,3.678);
	
	A[0] = a0;
	A[1] = a1;
	A[2] = a2;
	A[3] = a3;

	for(int i = 0; i<4; i++){
		std::cout<<"Square of box is "<<A[i].area()<<std::endl;
	}
	
	get_double_area(a1);

	a0.set_length(1.23);
	a0.set_width(2.34);
	a0.set_height(3.45);
	a0.get_length();
	a0.get_width();
	a0.get_height();
	
	std::cout<<"size of box is "<<sizeof(box)<<std::endl;
	std::cout<<"size of int is "<<sizeof(int)<<std::endl;
	std::cout<<"size of double is "<<sizeof(double)<<std::endl;
	std::cout<<"size of long is "<<sizeof(long)<<std::endl;
	std::cout<<"size of char is "<<sizeof(char)<<std::endl;
	std::cout<<"size of int* is "<<sizeof(int*)<<std::endl;
	std::cout<<"size of short is "<<sizeof(short)<<std::endl;
	

	box first(1), second(1), third;
	std::cout<<"before ++ first area = "<<first.area()<<" ,seconsd area = "<<second.area()<<std::endl;
	second = ++first;
	std::cout<<"after ++ first area = "<<first.area()<<" ,seconsd area = "<<second.area()<<std::endl;
	second = first++;
	std::cout<<"after ++(int) first area = "<<first.area()<<" ,seconsd area = "<<second.area()<<std::endl;
	second = --first;
	std::cout<<"after -- first area = "<<first.area()<<" ,seconsd area = "<<second.area()<<std::endl;
	second = first--;
	std::cout<<"after -- first area = "<<first.area()<<" ,seconsd area = "<<second.area()<<std::endl;
	third = first + second;
	std::cout<<"after adding first area = "<<first.area()<<" ,seconsd area = "<<second.area()<<" third area = "<<third.area()<<std::endl;
#endif

	return 0;
}	



