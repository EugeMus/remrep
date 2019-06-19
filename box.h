#ifndef BOX_H_MUS
#define BOX_H_MUS
class Body{
virtual double area()const = 0;
};

class box: public  Body {
	protected:
double length, width, height;
	public:
double get_length() const ;
double get_width() const;
double get_height() const;
void set_length(double );
void set_width(double );
void set_height(double );
box();
const box& operator= ( const box& ) ;
box& operator++ ();
box operator++ (int);
box& operator-- ();
box operator-- (int);
friend  box operator+ (const box&, const box&);
box(const box&);
box(double );
box(double , double );
box(double , double , double );
~box();
double area() const;
};

class Wbox: public box {
	protected:
double W_width, W_height;
	public:
double get_w_width() const;
double get_w_height() const;
void set_w_width(double);
void set_w_height(double);
Wbox();
Wbox(double );
Wbox(double , double );
Wbox(double , double , double );
Wbox(double , double , double , double);
Wbox(double , double , double , double, double);
Wbox(const Wbox&);
const Wbox& operator=(const Wbox&);
~Wbox();
double area() const;
};

#endif
