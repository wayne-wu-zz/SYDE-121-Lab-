#include "sumtwonums.h"
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;


void get_num (char num[]);
void conversion (char num[], int size);
int main(){
	char num1[20];
	char num2[20];
	get_num(num1);
	get_num(num2);
	cout << "number 1: "
}

//userinput 
void get_num (char num[]){

	cout << "Please enter the first number character by character:" <<endl;
	for (i=0; i < 20; i++){
		cin.get(num[i]);
		while (!isdigit(num[i])){
			cout<< "invalid input please try again" <<endl;
			cin.get(num[i]);
		}
	}
	conversion(num, i);
}

//convert char to int
void conersion(char num[], int size){
	int num_int_type = 0;
	for (size; size>=0, size--){
		num_int_type += num[size]*pow(10,size);
	}

//calculations 	
void calculation(char num1[], char num2[], int size){
	
}

