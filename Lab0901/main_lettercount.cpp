#include "lettercount.h"
#include <iostream>
using namespace std;

void read_file(string &line);
void string_analysis(string &line);

int main(){
	string line; 
	read_file(line); 
	string_analysis(line);
	return 0;
}
