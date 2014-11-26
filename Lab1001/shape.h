#ifndef SHAPE_H
#define SHAPE_H

enum Shape_Type {SQUARE, DIAMOND, PYRAMID, TRIANGLE};

class Shape{
	public: 
		Shape_Type shape_type;
		int shape_size; 
		bool isFilled; 
		
		Shape();
		Shape(Shape_Type shape_type);	
		
		void defineSize(int& shape_size);
		void defineFill(bool& isFilled);
		void getSize();
		void setSize();
		void printFilledShape(ofstream& out_stream);
		void printHollowShape(ofstream& out_stream);  
		void getIsFilled (bool& isFilled);
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
 		Diamond( DIAMOND ); // default constructor
 		void defineSize();
 		void printFilledShape( ofstream& out_stream );
 		void printHollowShape( ofstream& out_stream ); 
};

class Pyramid: public Shape{
	public:
 		Pyramid( PYRAMID ); // default constructor
 		void defineSize();
 		void printFilledShape( ofstream& out_stream );
 		void printHollowShape( ofstream& out_stream ); 
};

class Traingle: public Shape{
	public:
 		Triangle( TRIANGLE ); // default constructor
 		void defineSize();
 		void printFilledShape( ofstream& out_stream );
 		void printHollowShape( ofstream& out_stream ); 
};

#endif
