#ifndef BOX_H_MUS
#define BOX_H_MUS
class box {
double length, width, height;
	public:
double get_length() const ;
double get_width() const;
double get_height() const;
void set_length(double );
void set_width(double );
void set_height(double );
box();
const box& operator= ( const box& );
box(const box&);
box(double );
box(double , double );
box(double , double , double );
~box();

double area() const;
};

#endif
