//********************************************* 
// Student1 Name: Jerry Bai	
// Student1 Number: 20561350
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 04 Assignment: 04
// 
// Filename: lab0404
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

//this program does a multiplication quiz for kids
#include <iostream>
#include <cstdlib>
using namespace std;

//declaring variables
int x = rand() % 10;
int y = rand() % 10;
int answer = 0;
int correct = 0;
int totalQuestion = 0;

int main() {
	//welcome the user
	cout<< "Welcome to Multiplication Quiz" <<endl;
	cout<< "Enter -1 anytime to quit" <<endl <<endl;
	
	//ask questions based on multiplication of two random numbers
while (answer!=-1){
	x = rand() % 10;
	y = rand() % 10;
	cout<< "How much is " << x << " times "<< y <<" ? \n";
	cin>> answer;
		
		//if answered correctly, number of correct quesetions will increase by 1
		if (answer == x*y){
			cout<< "Congratulation! It's correct!" <<endl;
			correct++;}
			
		//if answered incorrectly and not -1, it goes through this loop until it is answered correctly	
		while ((answer!= x*y) && (answer!=-1)){
			cout<< "Incorrect." <<endl;
			cout<< "How much is " << x << " times "<< y <<" ? \n";
			cin>> answer;
				if (answer== x*y && answer != -1){
				cout<< "Congratulation! It's correct!" <<endl;
	 		}		
		}
	//total number of questions answered increases by 1		
	totalQuestion++;
	
	}
	//when user enter -1, the quiz ends, and the result is shown 
	cout<< "Thank you for playing. You have answered " << totalQuestion << " questions in total." <<endl <<endl;
 	cout<< correct << " of them were answered correctly. ";
}
