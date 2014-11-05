//********************************************* 
// Student1 Name: Jerry Bai	
// Student1 Number: 20561350
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 05 Assignment: 03
// 
// Filename: lab0503
// Date submitted: 15/10/14
// 
// We hereby declare that this code, submitted 
// for credit for the course SYDE121, is a product 
// of our own efforts. This coded solution has 
// not been plagiarized from other sources and 
// as not been knowingly plagiarized by others. 
// 
// Pair Programming Work Declaration: 
// Wayne Wu Completed 50% of the assignment. 
// Jerry Bai Completed 50% of the assignment. 
// 
//********************************************* 


//This program calculates the value of Pi using the idea of sequences and output the value of Pi based on the desired precision. 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	double pi_num = 0.0; //value of pi 
	double previous_pi_num = 0.0; //value of pi in the last term 
	const double denominator = 1; //a constant in the denominator of the equation for pi is setup here to make sure the output is in type double 
	int n = 1; //number of term
	int decimal_place = 1; //number of decimal places the user requests
	int pi_num2 = 0; //the rounded value of pi based on decimal_place 
	int previous_pi_num2 = 0; //the rounded value of pi in the last term based on decimal_place 
	bool trigger = true; //flag condition of the loop 
	int count = 1; //count controller after the two same rounded values of pi is spotted
	
	//accquire input from user 
	cout<< "Please enter the number of decimal places from 1 - 6, in which once the numbers of each terms is the same in that decimal places you have entered, the program will stop:  ";
	cin>>decimal_place;
	cout<< endl;
	
	//checks whether data is valid
	while (decimal_place<1 || decimal_place>6){
		cout<< "Please enter the number of decimal places from 1 - 6: "; 
		cin>>decimal_place;
		cout<< endl;
	}
	
	//calculates pi with respect to the term 
	while (trigger){
		cout.setf(ios::fixed);
		cout.precision(12);
		previous_pi_num = pi_num;
		pi_num = previous_pi_num + ((4*(pow((-1),(-1+n))))/(denominator + 2*((-1)+n)));
		cout<< n <<"        " << pi_num <<endl;	
		n++; 
		
		pi_num2 = floor((pi_num*(pow(10,decimal_place))));
		previous_pi_num2 = floor((previous_pi_num*(pow(10,decimal_place))));
		
		//once two same rounded values of pi is spotted, the count controll starts 
		if (pi_num2 == previous_pi_num2){
		    while (count>0){
		    	cout.precision(12);
				previous_pi_num = pi_num;
				pi_num = previous_pi_num + ((4*(pow((-1),(-1+n))))/(denominator + 2*((-1)+n)));
				cout<< n <<"        " << pi_num <<endl;	
				count--;
				n++;  
		    }
			trigger = false; //flag condition is met therefore program will now end
		}
	}
}
