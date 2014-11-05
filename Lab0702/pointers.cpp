
#include <iostream>
using namespace std;

#define PI = 3.141592653589

struct Circle{
	int center_x;
	int center_y;
	int radius;
};

int main() {
	Circle new_circle;
	Circle *circle_pointer;
	double circumference;
	double *circumference_pointer;
	
	circle_pointer = &new_circle;
	circumference_pointer = &circumference;
	
	cout << "Please enter the center point and radius of the circle" <<endl; 
	cout << "(format: x y radius, in positive integers.)" <<endl;
	cin << new_circle.center_x << new_circle.center_y << new_circle.radius;
	cout << endl;
	
	circumference = PI*new_circle.radius*new_circle.radius; 
	
	cout << "The value of the variable circumference is " << *circumference_pointer <<endl;
	cout << "The address of the variable circumference is "<< circumference_pointer <<endl <<endl;
	cout << "The circle's location is (" << new_circle.center_x << "," <<new_circle.center_y << ")" <<endl;
	cout << "The circle's radius is " << new_circle.radius <<endl;
	cout << "The address of the circle struct is: " << circle_pointer;
	
	return 0;
}
