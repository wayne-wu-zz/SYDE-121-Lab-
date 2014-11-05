//********************************************* 
// Student1 Name: Jerry Bai	
// Student1 Number: 20561350
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 04 Assignment: 01
// 
// Filename: lab0401
// Date submitted: 8/10/14
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

#include <iostream>
#include <cmath>
using namespace std;

// This program allows user to determine the vector addition, cross product, and dot product of two vectors given their components. 


// declaring all variables needed in this operation 
int vectorUx;
int vectorUy;
int vectorVx;
int vectorVy;
int vectorU1x;
int vectorU1y;
int vectorU2x;
int vectorU2y;
int vectorV1x;
int vectorV1y;
int vectorV2x;
int vectorV2y;
int vectorchoice = 0;
int vecAddx;
int vecAddy;
int cross;
int dot;

int main() {

	// Input components of vectors from user
	cout<< "This program runs 2-D vector operations given vector U and V. \n";
	cout<< "Vector U has components of U1 and U2 \n";
	cout<< "Vector V has components of V1 and V2 \n";

	cout<< "Please enter the components for U." << endl;
	cout<< "First please enter two interger numbers (x,y) for U1: " <<endl;
	cin>> vectorU1x >> vectorU1y;
	cout<< "Now please enter two interger numbers (x,y) for U2: " <<endl;
	cin>> vectorU2x >> vectorU2y;
	
	cout<< "Please enter the components for V." << endl;
	cout<< "First please enter two interger numbers (x,y) for V1: " <<endl;
	cin>> vectorV1x >> vectorV1y;
	cout<< "Now please enter two interger numbers (x,y) for V2: " <<endl;
	cin>> vectorV2x >> vectorV2y; 
	
	//echoes entered values back to the user 
	cout<< "You have entered:" <<endl;
	cout<< "U1 = (" <<vectorU1x <<"," <<vectorU1y <<") \n";
	cout<< "U2 = (" <<vectorU2x <<"," <<vectorU2y <<") \n";
	cout<< "V1 = (" <<vectorV1x <<"," <<vectorV1y <<") \n";
	cout<< "U2 = (" <<vectorV2x <<"," <<vectorV2y <<") \n";
	
	vectorUx = vectorU2x - vectorU1x;
	vectorUy = vectorU2y - vectorU1y;
	vectorVx = vectorV2x - vectorV1x;
	vectorVy = vectorV2y - vectorV1y;
	
	//calculate the two vectors given their components, and output back to the user 
	cout<< "The vector U and V are: \n";
	
	if (vectorUy<0){
	cout<< "U = "<<vectorUx <<"i - " <<abs(vectorUy) << "j" <<endl;}
	else{
	cout<< "U = "<<vectorUx <<"i + " <<vectorUy <<"j" <<endl;}
	if (vectorVy<0){
	cout<< "U = "<<vectorVx <<"i - " <<abs(vectorVy) << "j" <<endl;}
	else{
	cout<< "U = "<<vectorVx <<"i + " <<vectorVy <<"j" <<endl;}	

	//give user options to select different vector operations 
	cout<< "Select a vector operation to perform: \n";
	cout<< "1: U + V (vector addition) \n";
	cout<< "2: U x V (cross product) \n";
	cout<< "3: U . V (dot product) \n";
	cout<< "Enter 1-3 from the menu above, or -1 to exit:" <<endl <<endl;
	cin>> vectorchoice; 
	cout<< endl;
	
	//calculation of vector operations 
	vecAddx = vectorUx + vectorVx;
	vecAddy = vectorUy + vectorUy;
	cross = vectorUx*vectorVy - vectorUy*vectorVx;
	dot = vectorUx*vectorVx + vectorUy*vectorVy;
	
	//select the right case and output the correct information regarding vector operations back to the user
	while (vectorchoice!=-1){
		
		switch (vectorchoice) {
			case 1: 
				{
					if (vecAddy<0){
					cout<< "U + V = "<<vecAddx <<"i - " <<abs(vecAddy) << "j" <<endl <<endl;}
					else{
					cout<< "U + V = "<<vecAddx <<"i + " <<vecAddy <<"j" <<endl <<endl;}
				break;
				}
			case 2: 
				cout << "U x V = " << cross <<endl <<endl;	
				break;
			case 3: 
				cout << "U . V = " << dot << endl <<endl;
				break;
					
		}
	//loop back to the vector operation selection menu
		cout<< "Select a vector operation to perform: \n";
		cout<< "1: U + V (vector addition) \n";
		cout<< "2: U x V (cross product) \n";
		cout<< "3: U . V (dot product) \n";
		cout<< "Enter 1-3 from the menu above, or -1 to exit:" <<endl <<endl;
		cin>> vectorchoice;
		cout<< endl;
	}
return 0;	
}
	
	
	
	
	

