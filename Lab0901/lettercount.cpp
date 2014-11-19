#include "lettercount.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;

void num_repeat_calculation (int char_value[], int num_repeat[], int size);
void sorting_output (int num_repeat[]);

void read_file(string &line) { 
	char in_file_name[20], out_file_name[20];
	ifstream in_stream; 
	
	cout << "Enter the input file name (maximum of 20 characters): "; 
	cin >> in_file_name;
	cout << "Enter the output file name (maximum of 20 characters): ";
	cin >> out_file_name; 
	
	in_stream.open(in_file_name);
	
	if (in_stream.fail())
	{
		cout << "Input file opening failed. \n";
		exit(1);
	}
	else
	{
		while (getline(in_stream,line));
		cout << line; 
	} 
	in_stream.close();
}

void string_analysis(string &line) {
	int size = line.length(); //size of the string
	char c_line [size +1]; //c-string 
	int num_repeat[26]; //26 letters 
	strcpy (c_line, line.c_str()); //convert string to c-string 
	cout << endl;
	cout << "size of the string: " << size << endl << endl; 
	int char_value [size]; //character value (ASCII) 
	
	for (int i = 0; i <= size; i++) // converting c-string to interger values 
	{
		char_value [i] = int(c_line[i]);
	}
	
	for (int i = 0; i <= size; i++){
		cout<< char_value [i] <<endl;
	}
	
	num_repeat_calculation (char_value, num_repeat, size);
	sorting_output (num_repeat);
}

void num_repeat_calculation (int char_value[], int num_repeat[], int size){
	int ascii_num = 97; //a = 97
	for (int j = 0; j <= 25; j++){
		for (int i = 0; i<= size; i++){
//			cout << char_value [i] << endl;
//			cout << ascii_num << endl; 
			if (ascii_num == char_value [i])
			num_repeat[j]++; 
		}
		cout << "ascii: " << ascii_num << endl;
		cout << "repeated times: " << num_repeat[j] <<endl; 
		ascii_num++;
		
	}
}

void sorting_output (int num_repeat[]){
	char letter_display[27];
	int ascii = 97;
	for (int i = 0; i <= 25; i++){
		letter_display[i] = char(ascii);
		ascii++;
	} 
	cout << "Letter:          "; 
	cout << "Quantities:" <<endl;
	for (int i = 0; i <=25; i++){
		cout << letter_display[i] << setw(20) << num_repeat[i] <<endl;	
	}
}
	
