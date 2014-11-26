#ifndef SHAPE_H
#define SHAPE_H

enum Shape_Type {SQUARE, DIAMOND, PYRAMID, TRIANGLE};

class Shape{
	public: 
		int shape_size; 
		bool isFilled; 
		SQUARE Square; 
		DIAMOND Diamond; 
		PYRAMID Pyramid; 
		TRIANGLE Triangle; 
	
		void defineSize();
		void defineFill();
		void getSize();
		void setSize();
		void printFilledShape();
		void printHollowShape();  
		bool getIsFilled (bool isFilled);
};

class Square: public Shape{
	public:
 		Square( void ); // default constructor
 		void defineSize();
 		void printFilledShape( ofstream& out_stream );
 		void printHollowShape( ofstream& out_stream ); 
};

class Diamond: public Shape{
	public:
 		Diamond( void ); // default constructor
 		void defineSize();
 		void printFilledShape( ofstream& out_stream );
 		void printHollowShape( ofstream& out_stream ); 
};

class Pyramid: public Shape{
	public:
 		Pyramid( void ); // default constructor
 		void defineSize();
 		void printFilledShape( ofstream& out_stream );
 		void printHollowShape( ofstream& out_stream ); 
};

class Traingle: public Shape{
	public:
 		Triangle( void ); // default constructor
 		void defineSize();
 		void printFilledShape( ofstream& out_stream );
 		void printHollowShape( ofstream& out_stream ); 
};

#endif
