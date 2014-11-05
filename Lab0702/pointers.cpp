//********************************************* 
// Student1 Name: Brian So	
// Student1 Number: 20477254
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 07 Assignment: 02
// 
// Filename: pointers
// Date submitted: 05/11/14
// 
// We hereby declare that this code, submitted 
// for credit for the course SYDE121, is a product 
// of our own efforts. This coded solution has 
// not been plagiarized from other sources and 
// as not been knowingly plagiarized by others. 
// 
// Pair Programming Work Declaration: 
// Wayne Wu Completed 50% of the assignment. 
// Brian So Completed 50% of the assignment. 
// 
//*********************************************

#include <iostream>
using namespace std;

#define PI 3.141592653589

struct Circle{
	int center_x;
	int center_y;
	int radius;
};

bool inputCheck (int input);


int main() {
	Circle new_circle;
	Circle *circle_pointer;
	double circumference;
	double *circumference_pointer;
	
	circle_pointer = &new_circle;
	circumference_pointer = &circumference;
	
	do {
	cout << "Please enter the center point and radius of the circle" <<endl; 
	cout << "(format: x y radius, in positive integers.)" <<endl;
	cin >> new_circle.center_x >> new_circle.center_y >> new_circle.radius;
	cout << endl;
	inputCheck(new_circle.radius);
	} while (inputCheck == false);
	
	circumference = PI*new_circle.radius*new_circle.radius; 
	
	cout << "The value of the variable circumference is " << *circumference_pointer <<endl;
	cout << "The address of the variable circumference is "<< circumference_pointer <<endl <<endl;
	cout << "The circle's location is (" << new_circle.center_x << "," <<new_circle.center_y << ")" <<endl;
	cout << "The circle's radius is " << new_circle.radius <<endl;
	cout << "The address of the circle struct is: " << circle_pointer;
	
	return 0;
}

bool inputCheck(int input){
	if (input <= 0){
		cout << "Input must be a positive integer!";
		return false;
	} else{
		return true;
	}
}

