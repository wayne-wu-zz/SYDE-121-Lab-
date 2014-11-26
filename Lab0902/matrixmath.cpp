#include <fstream>
#include <iostream>
using namespace std; 



//structures for matrices 
struct matrix_struct{
	int row; 
	int column; 
	int matrix[100][100];
};

matrix_struct matrix[2];

void read_file(matrix_struct matrix[]);
bool valid_check (matrix_struct matrix[]);
void echoe_input (matrix_struct matrix[]);

int main(){

	read_file(matrix);

	return 0; 
}

void read_file(matrix_struct matrix[]) { 
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
	
		for (int i = 0; i <= 1; i++){
			in_stream >> matrix[i].row;
			in_stream >> matrix[i].column;
			
			for (int j = 0; j < matrix[i].row; j++){
				
				for (int k = 0; k < matrix[i].column; k++){
					in_stream>> matrix[i].matrix[j][k];
				}
			}
		}
			
			if (valid_check(matrix)==false)
				{
					cout << "Invalid matrix multiplication, please make sure your input is valid." <<endl; 
					exit(1);				
				}
	echoe_input(matrix);
	
	
	in_stream.close();
}

bool valid_check (matrix_struct matrix[]){
	if (matrix[0].column == matrix[1].row){
		return true;
	} else {
		return false; 
	}
}

void echoe_input (matrix_struct matrix[]){
	for (int i = 0; i <= 1; i++){
			cout<< matrix[i].row << " " << matrix[i].column <<endl;
			for (int j = 0; j < matrix[i].row; j++){
				for (int k = 0; k < matrix[i].column; k++){
					cout<< matrix[i].matrix[j][k] <<" " ;
				}
				cout <<endl; 
			}
		}
}
