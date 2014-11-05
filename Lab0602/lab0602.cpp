//********************************************* 
// Student1 Name: Brian So	
// Student1 Number: 20477254
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 06 Assignment: 02
// 
// Filename: lab0602
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

// This programs calculates the average of the class final and produce a histogram that shows the distribution of marks 
#include <iostream>
#include <iomanip>
using namespace std;

//function declarations 
void populate_bins (double &totalscore, int &scoreman, int&bin1 , int&bin2, int&bin3, int&bin4, int&bin5, int&bin6);
void histogram (double totalscore, int scorenum, int bin1, int bin2, int bin3, int bin4, int bin5, int bin6);
void printStars (int bin);

int main() {
	double totalscore = 0; //sum of all marks 
	int scorenum = 0; //
	int bin1 = 0; //0-49
	int bin2 = 0; //50-59
	int bin3 = 0; //60-69
	int bin4 = 0; //70-79
	int bin5 = 0; //80-89
	int bin6 = 0; //90-100
	
	populate_bins(totalscore, scorenum, bin1, bin2, bin3, bin4, bin5, bin6);
	histogram (totalscore, scorenum, bin1, bin2, bin3, bin4, bin5, bin6);
}

// function definition, get input from users and record how many people are in each range section 
void populate_bins (double &totalscore, int &scorenum, int&bin1 , int&bin2, int&bin3, int&bin4, int&bin5, int&bin6) {
	double score = 100; 
	
	do {
	cout << "Please enter the marks for the students (Enter -1 if you no longer want to input any number): ";
	cin >> score;
		if (score >= 0 && score<50){
			bin1++; 		
		} else if (score>=50 && score<60) {
			bin2++;
		} else if (score>=60 && score<70) {
			bin3++;
		} else if (score>=70 && score<80) {
			bin4++;
		} else if (score>=80 && score<90) {
			bin5++;
		} else if (score>=90 && score<=100) {
			bin6++;
		} else 
			cout << "Invalid input please try again!";
			
		if (score>=0 && score<=100){
			totalscore += score;
			scorenum++;
		}
	} while (score !=-1); 
	cout <<endl;
}

// function definition, producint the average and histogram 
void histogram (double totalscore, int scorenum, int bin1, int bin2, int bin3, int bin4, int bin5, int bin6) {
	double average = 0;
	average = totalscore/scorenum;
	cout << "The class average is: " << average <<endl <<endl;
	
	
	cout << "  0-49: ";
 	printStars(bin1);
	cout << " 50-59: ";
	printStars(bin2);
	cout << " 60-69: ";
	printStars(bin3);
	cout << " 70-79: ";
	printStars(bin4);
	cout << " 80-89: ";
	printStars(bin5);
	cout << "90-100: ";
	printStars(bin6);
}

// function definition, printing the asterisk to be used in histogram function 
void printStars(int bin){
	for (int i = 0; i<bin; i++){
	cout << "*";	
	}

	cout <<endl;
}
