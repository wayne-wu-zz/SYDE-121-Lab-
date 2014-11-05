//********************************************* 
// Student1 Name: Brian So	
// Student1 Number: 20477254
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 07 Assignment: 01
// 
// Filename: coord.cpp
// Date submitted: 5/11/14
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

#include "coord.h"
#include <iostream>
#include <cmath>
using namespace std;

void get_point (point3D &point);
void print_point(point3D &point);
double spatial_dist(point3D point1, point3D point2);
double plani_dist(point3D point1, point3D point2);
double ht_diff(point3D point1, point3D point2);
double azimuth(point3D point1, point3D point2);

//get input from the users 
void get_point (point3D &point){
	cout << "enter X value: "; 
	cin >> point.xCoord;
	cout << "You have entered: " << point.xCoord <<endl;
	cout << "enter Y value: "; 
	cin >> point.yCoord;
	cout << "You have entered: " << point.yCoord <<endl;
	cout << "enter Z value: "; 
	cin >> point.zCoord;
	cout << "You have entered: " << point.zCoord <<endl;
	
}

//print the coordinates of points 
void print_point(point3D &point){
	cout << "X coord: " << point.xCoord << endl;
	cout << "Y coord: " << point.yCoord << endl;
	cout << "Z coord: " << point.zCoord << endl;
		
}

//compute the spatial distance between 2 points 
double spatial_dist(point3D point1, point3D point2) {
	double distance =  0.0;
		distance = sqrt((point2.xCoord - point1.xCoord)*(point2.xCoord - point1.xCoord)
			+ (point2.yCoord - point1.yCoord)*(point2.yCoord - point1.yCoord) + (point2.zCoord - point1.zCoord)*(point2.zCoord - point1.zCoord));
		return distance; 
}



//compute the plaimetric difference between 2 points
double plani_dist(point3D point1, point3D point2){
	double dp = 0.0;
	dp = sqrt((point2.xCoord - point1.xCoord)*(point2.xCoord - point1.xCoord)
			+ (point2.yCoord - point1.yCoord)*(point2.yCoord - point1.yCoord));
	return dp;
}

//compute the height difference between 2 points
double ht_diff(point3D point1, point3D point2){
	double dh;
	dh = 0.0;
	dh = point2.zCoord - point1.zCoord;
	return dh;
}

//compute the azimuth between 2 points
double azimuth(point3D point1, point3D point2){
	double num;
	double denom;
	double ans;
	
	num = 0.0;
	denom = 0.0;
	ans = 0.0;

	num = (point2.yCoord - point1.yCoord);
	denom = (point2.xCoord - point1.xCoord);

	ans = atan2(num, denom);
	return ans;

}
	
