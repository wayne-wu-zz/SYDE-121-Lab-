//********************************************* 
// Student1 Name: Brian So	
// Student1 Number: 20477254
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 06 Assignment: 01
// 
// Filename: lab0601
// Date submitted: 29/10/14
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

//this program calculates the roots for a given quadratic equation
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// all the root components declared in the following structure 
struct root_components {
	char imaginary; 
	double real; 
	}; 
root_components root1;
root_components root2;

//function declaration 
void get_input (double&a, double&b, double&c);
void display_output ();
void calculation (double&a, double&b, double&c);

int main() {
	double a, b, c;
	
	cout << "This program calculates the roots of a quadratic for you" <<endl;
	get_input(a,b,c); 
	calculation(a, b, c);
	display_output();
	
	return 0;
}

// function definition for get_input 
void get_input (double&a, double&b, double&c){
	cout << "A quadratic is composed of ax^2 + bx + c" <<endl
		<< "Please enter the value of a, b, and c." <<endl
		<< "a: "; 
	cin >> a; 
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	
	return;
}

//function definition for calculation 
void calculation (double&a, double&b, double&c) {
	double discriminant = 0;
	discriminant = (pow(b,2)) - (4*a*c);
	if (discriminant < 0){
		root1.imaginary = 'i';
		root2.imaginary = 'i';
		discriminant = abs(discriminant);
	}
	root1.real = ((-b) + sqrt(discriminant))/(2*a);
	root2.real = ((-b) - sqrt(discriminant))/(2*a);
	return; 
}

//function definition for display_output 
void display_output (){
	if (root1.imaginary == 'i'){
		cout << "Roots are complex numbers (i = imaginary number)" << endl; 
		cout << "Root 1: " << root1.real << root1.imaginary <<endl;
		cout << "Root 2: " << root2.real << root2.imaginary <<endl;
	}else {
		cout << "The roots are:" << endl;
		cout << "Root 1: " << root1.real <<endl;
		cout << "Root 2: " << root2.real <<endl;
	}
	return;
}

