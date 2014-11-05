//********************************************* 
// Student1 Name: Brian So	
// Student1 Number: 20477254
// 
// Student2 Name: Wayne Wu
// Student2 Number: 20563585
// 
// SYDE 121 Lab: 06 Assignment: 03
// 
// Filename: lab0603
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

#include <iostream>
#include <cmath>
#define PI 3.1415926535
using namespace std;
const double radToDeg = 180.0/PI;
const double degToRad = PI/180;


//check quadrants
int checkQuadrant(int choice){
	//Assume rBearing is in degrees now
	int quadrant = 1;
	if ((choice >= 5) && (choice <=8)){
		//adjust to 4th quadrant
		quadrant = 4;
	} else if ((choice >= 9) && (choice <=12)){
		//adjust to 3rd quadrant
		quadrant = 3;
	} else if ((choice >= 13) && (choice <=16)){
		//adjust to 2 quadrant
		quadrant = 2;
	}
	return quadrant;
}

//Calculate the resulting Bearing (the heading)
double calcResultHeading(bool windCheck, double inputBearing, double planeAirSpeed, double windSpeed, int choice){
	double rBearing = 0;
	double bearing1 = 0;
	int quadrant = 0;
	quadrant = checkQuadrant(choice);

	//windCheck = 1 --> wind is +ve
	if (windCheck){
		cout <<"wind is +ve" <<endl;
		bearing1 = asin((windSpeed*(sin(inputBearing)))/planeAirSpeed);

		if ((quadrant==4)||(quadrant==3)){
			rBearing = inputBearing - bearing1;
		} else {
			rBearing = inputBearing + bearing1;
		}

	} else {
		//windCheck = 0 --> wind is -ve
		cout <<"wind is -ve" <<endl;
		bearing1 = asin((windSpeed*(sin(PI - inputBearing)))/planeAirSpeed);
		rBearing = inputBearing - bearing1;
		if ((quadrant==1)||(quadrant==2)){
			rBearing = inputBearing - bearing1;
		} else {
			rBearing = inputBearing + bearing1;
		}		
	}
	cout << "bearing1:" << bearing1 * radToDeg << endl;
	cout << "inputBearing:" << inputBearing* radToDeg << endl;
	cout << "rBearing: " << rBearing* radToDeg << endl;	
	return rBearing;
}

//Calculate the resulting speed
double calcResultSpeed(bool windCheck, double rBearing, double inputBearing, double planeAirSpeed){
	double rSpeed = 0;

	//windCheck = 1 --> wind is +ve
	if (windCheck){
		rSpeed = (cos(rBearing)*planeAirSpeed)/sin(inputBearing);
	} else {
		//windCheck = 0 --> wind is -ve
		rSpeed = (sin(rBearing)*planeAirSpeed)/sin(PI - inputBearing);
	}
	return rSpeed;
}

//Calculate the cumulative travel time
double calcResultTime(double dIN, double rSpeed){
	double time = 0;

	time = dIN/rSpeed;
	return time;
}

//Take in user choice of direction and map it to a set of set directions (deg)
double stillDirection(int choice){
	double inputBearing = 0;
	switch (choice){
		case (1) :
			cout << "flight direction = 1: ENE" << endl;
			inputBearing = 22.5;
			break;
		case (2) :
			cout << "flight direction = 2: NE " << endl;
			inputBearing = 45.0;
			break;
		case (3) :
			cout << "flight direction = 3: NNE " << endl;
			inputBearing = 67.5; 
			break;
		case (4) :
			cout << "flight direction = 4: N" << endl;
			inputBearing = 0;
			break;
		case (5) :
			cout << "flight direction = 5: NNW" << endl;
			inputBearing = 67.5;
			break;
		case (6) :
			cout << "flight direction = 6: NW" << endl;
			inputBearing = 45;
			break;
		case (7) :
			cout << "flight direction = 7: WNW" << endl;
			inputBearing = 22.5;
			break;
		case (8) :
			cout << "flight direction = 8: W" << endl;
			inputBearing = 90.0;
			break;
		case (9) :
			cout << "flight direction = 9: WSW" << endl;
			inputBearing = 22.5;
			break;
		case (10):
			cout << "flight direction = 10: SW" << endl;
			inputBearing = 45;
			break;
		case (11):
			cout << "flight direction = 11: SWS" << endl;
			inputBearing = 67.5;
			break;
		case (12):
			cout << "flight direction = 12: S" << endl;
			inputBearing = 0;
			break;
		case (13):
			cout << "flight direction = 13: SSE" << endl;
			inputBearing = 67.5;
			break;
		case (14):
			cout << "flight direction = 14: SE" << endl;
			inputBearing = 45.0;
			break;
		case (15):
			cout << "flight direction = 15: ESE" << endl;
			inputBearing = 22.5;
			break;
		case (16):
			cout << "flight direction = 16: E" << endl;
			inputBearing = 0;
			break;
		default:
			cout << "Please input a valid number" <<endl;
	}
	return inputBearing;
}

//Helper function to orient the resulting vector to be measured relative to East
double orient(double rBearing, int choice){
	//Assume rBearing is in degrees now
	int quadrant = 0;
	quadrant = checkQuadrant(choice);

	if (quadrant == 4){
		//adjust to 4th quadrant
		rBearing = 180 - rBearing;
	} else if (quadrant == 3){
		rBearing = 180 + rBearing;
	} else if (quadrant == 2){
		rBearing = 360 - rBearing;
	}
	return rBearing;
}

int main(){

	bool windCheck = 0; // Switch to see which way, east or west, the wind is blowing
	double windDir = 0; // Value to see if wind speed is larger or less than zero
	double planeAirSpeed = 0; // input plane speed
	double windSpeed = 0; // input wind speed
	double dIN = 0; // input destination distance
	double inputBearing = 0; // Input destination bearing
	double rBearing = 0; //resulting bearing
	double rSpeed = 0; // resulting speed
	double rTime = 0; // resulting time
	int choice = -1;

	cout << "Enter the aircraft cruising speed in still air (in km/h): " <<endl;
	cin >> planeAirSpeed;
	cout << "cruising speed = " << planeAirSpeed <<endl <<endl;

	cout << "Enter the wind speed in km/h: " <<endl;
	cin >> windSpeed;
	cout << "wind speed = " << windSpeed <<endl <<endl;

	cout << "Enter 1 if the wind is blowing from the West and -1 if wind is blowing from the East: " <<endl;
	cin >> windDir;
	if (windDir > 0){
		//Wind is going eastward
		windCheck = 1;
		cout << "Wind is blowing from the West." <<endl<<endl;
	} else {
		windCheck = 0;
		cout << "Wind is blowing from the East." <<endl<<endl;
	}

	cout << "Enter the distance between the originating and destination cities, in km: " <<endl;
	cin >> dIN;
	cout << "flight distance = " << dIN <<endl<<endl;

	cout << "Enter the compass direction of the destination city, relative to the originating cities, using the following values: " << endl;
	cout << "1: ENE" << endl;
	cout << "2: NE" << endl;
	cout << "3: NNE" << endl;
	cout << "4: N" << endl;

	cout << "5: NNW" << endl;
	cout << "6: NW" << endl;
	cout << "7: WNW" << endl;
	cout << "8: W" << endl;

	cout << "9: WSW" << endl;
	cout << "10: SW" << endl;
	cout << "11: SWS" << endl;
	cout << "12: S" << endl;

	cout << "13: SSE" << endl;
	cout << "14: SE" << endl;
	cout << "15: ESE" << endl;
	cout << "16: E" << endl;
	cin >> choice;
	inputBearing = stillDirection(choice);
	inputBearing = inputBearing * degToRad; //convert from degrees -> rad

	cout << "original flight heading = (deg)" << inputBearing*radToDeg << " (rad)" <<inputBearing<< endl<<endl;

	rBearing = calcResultHeading(windCheck, inputBearing, planeAirSpeed, windSpeed, choice); //returns rad
	rSpeed = calcResultSpeed(windCheck, rBearing, inputBearing, planeAirSpeed);
	rTime = calcResultTime(dIN, rSpeed);

	cout << "Adjusted Heading (relative to east): " << orient(rBearing*radToDeg, choice) << endl; //orient the calculation to be relative to the eastward direction
	cout << "Adjusted time to destination: " << rTime << endl;

	system("PAUSE");
	return 0;

}
