//********************************************* 
// Student1 Name: Jerry Bai	
// Student1 Number: 20561350
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 05 Assignment: 01
// 
// Filename: lab0501
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

//This program outputs asterisk filled diamond, based on the number of rows input by the user
#include <iostream>
#include <cstdlib>
using namespace std;

//variable declarations 
int spaceNum = 0; //number of spaces
int spaceMax = 0; //maximum number of spaces before/after the stars for each line
int starNum = 0; //number of stars
int starMax = 0; //maximum number of stars
int star_multiply_num = 0; //number to multiply by after each line *must be multiplied by a factor of -2 to decrease the number of stars 
int rowNum = 0; //number of rows 


int main() {
	
	//accquire input from users 
	cout << "Enter a positive interger from 3 - 19: ";
	cin >> rowNum;
	cout << endl;
	
	//check whether data inputed is valid for this case
	while(rowNum%2==0 || rowNum<3 || rowNum>19){
		cout << "please enter a valid input" << endl;
		cout << "Enter a positive interger from 3 - 19:";
		cin >> rowNum;
		cout << endl;
	}
	
	//echoes back the inputed data
	cout << "You have entered: " <<rowNum <<endl <<endl;
	
	//pre-calculations in order to set up proper equations to execute the loop
	spaceMax = rowNum/2; //let the maximum nmber of spaces be the same with rowNum/2 which will essentially be (rowNum-1)/2 due to type rounding

	starMax = rowNum; //let maximum number of stars to be the same as the number of rows
	star_multiply_num = rowNum/2; //let the number to multiply the number of stars by equal to rowNum/2 which will essentially be (rowNum-1)/2 due to type rounding
	
	//output the diamond using a for loop 
	for (;rowNum >=0; rowNum--){
		
		//let the number of stars to begin with equal to the maximum number of stars reduced by 2 times the absolute value of the star_multiply_num 
		starNum = starMax - 2*abs(star_multiply_num);
		
		spaceNum = abs(spaceMax); // let the number of spaces to begin with equal to the maximum number of spaces 
		
		//output spaces
		for (;abs(spaceNum)>=1 && abs(spaceNum)<=abs(spaceMax);spaceNum--){
			cout << " "; 
		}
		spaceNum = 1; //reset number of spaces back to 1 for the next loop (after the for loop, spaceNum will become 0 which conflicts with the next loop for spaces)
		
		//output stars
		for (;starNum>=1;starNum--){
			cout << "*";
		}
		
		//output spaces again 
		for (;abs(spaceNum)<=abs(spaceMax);spaceNum++){
			cout << " ";
		}
		
		star_multiply_num--; //star_multiply_num decreases in order to subtract less stars and thus producing more stars 
		spaceMax--; //Maximum spaces decreases 
		
		cout <<endl;
	}
}
