//============================================================================
/*
	Name: Asad Tariq
	Roll No: 19i-0659
	Section: E
	Department: CS
*/
//============================================================================

#include "Matrix.h"
#include <iostream>
using namespace std;

int main() {

	/* cin>> cout<< operators */
	/* Constructors */

	Matrix M1; 		// By default it will create 2x2 Matrix
	Matrix M2(3,3);

	cout<<"Enter Values for Matrix M1 : "; cin>>M1;
	cout<<endl<<endl;
	cout<<"Enter Values for Matrix M2 : "; cin>>M2;
	cout<<endl<<endl;
	Matrix M3=(M2);  // Copy Constructor

	cout<<"Values of Matrix M1 "<<endl<<M1<<endl;
	cout<<"Values of Matrix M2 "<<endl<<M2<<endl;
	cout<<"Values of Matrix M3 "<<endl<<M3<<endl;
	cout<<endl<<endl;


	/* Assignment Operator */
	cout<<"::::::::::::::: ASSIGNMENT OPERATOR = :::::::::::::::"<<endl<<endl;

	Matrix M4, M5;
	cout<<"Enter Values for Matrix M4 : "; cin>>M4;
	cout<<endl<<endl;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M5 "<<endl<<M5<<endl;
	cout<<endl<<endl;
	M5=M4;
	cout<<"Values of M5 after M5=M4 :::: "<<endl;
	cout<<"NOW Values of Matrix M5 "<<endl<<M5<<endl;
	cout<<endl<<endl;

	/* Equality Operator == */
	cout<<"::::::::::::::: EQUALITY OPERATOR == :::::::::::::::"<<endl<<endl;

	bool c1;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M5 "<<endl<<M5<<endl;
	c1= M4==M5;
	cout<<endl;
	cout<<"Equality Status of Matrix M4 and M5 = "<<c1;
	cout<<endl<<endl;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M3 "<<endl<<M3<<endl;
	c1= M4==M3;
	cout<<endl;
	cout<<"Equality Status of Matrix M4 and M3 = "<<c1;
	cout<<endl<<endl;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M1 "<<endl<<M1<<endl;
	c1= M4==M1;
	cout<<endl;
	cout<<"Equality Status of Matrix M4 and M1 = "<<c1;
	cout<<endl<<endl;

	/* Operator + Addition */
	cout<<"::::::::::::::: ADDITION OPERATOR + :::::::::::::::"<<endl<<endl;

	Matrix SUM;
	Matrix SUM2;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M5 "<<endl<<M5<<endl;
	SUM= M4+M5;
	cout<<endl<<endl;
	cout<<"The SUM Matrix :::: "<<endl;
	cout<<SUM;
	cout<<endl<<endl;
	cout<<"Values of Matrix M2 "<<endl<<M2<<endl;
	cout<<"Values of Matrix M1 "<<endl<<M1<<endl;
	SUM2= M2+M1;
	cout<<endl<<endl;

	/* Operator - Subtraction */
	cout<<"::::::::::::::: SUBTRACTION OPERATOR - :::::::::::::::"<<endl<<endl;

	Matrix SUB;
	Matrix SUB2;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M5 "<<endl<<M5<<endl;
	SUB= M4-M5;
	cout<<endl<<endl;
	cout<<"The SUB Matrix :::: "<<endl;
	cout<<SUB<<endl<<endl;
	cout<<"Values of Matrix M1 "<<endl<<M1<<endl;
	cout<<"Values of Matrix M2 "<<endl<<M2<<endl;
	SUB2= M2-M1;
	cout<<endl<<endl;

	/* Operator * Multiplication */
	cout<<"::::::::::::::: MULTIPLICATION OPERATOR * :::::::::::::::"<<endl<<endl;

	Matrix MUL;
	Matrix MUL2;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M5 "<<endl<<M5<<endl;
	MUL= M4*M5;
	cout<<endl<<endl;
	cout<<"The MUL Matrix :::: "<<endl;
	cout<<MUL<<endl<<endl;
	cout<<"Values of Matrix M1 "<<endl<<M1<<endl;
	cout<<"Values of Matrix M3 "<<endl<<M3<<endl;
	MUL2= M3*M1;
	cout<<endl<<endl;

	/* Operator ++ PostIncrement */
	cout<<"::::::::::::::: POSTINCRMENT OPERATOR ++ :::::::::::::::"<<endl<<endl;

	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M5 "<<endl<<M5<<endl;
	M5= M4++;
	cout<<endl<<endl;
	cout<<":::::: M5=M4++ ::::::"<<endl;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M5 "<<endl<<M5<<endl;
	cout<<endl<<endl;

	/* Operator += */
	cout<<"::::::::::::::: OPERATOR += :::::::::::::::"<<endl<<endl;

	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M5 "<<endl<<M5<<endl;
	M5+=M4;
	cout<<endl<<endl;
	cout<<":::::: M5+=M4 ::::::"<<endl;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M5 "<<endl<<M5<<endl;
	cout<<endl<<endl;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M3 "<<endl<<M3<<endl;
	cout<<":::::: M3+=M4 ::::::"<<endl;
	M3+=M4;
	cout<<endl<<endl;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M3 "<<endl<<M3<<endl;
	cout<<endl<<endl;

	/* Operator -= */
	cout<<"::::::::::::::: OPERATOR -= :::::::::::::::"<<endl<<endl;

	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M5 "<<endl<<M5<<endl;
	M5-=M4;
	cout<<endl<<endl;
	cout<<":::::: M5-=M4 ::::::"<<endl;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M5 "<<endl<<M5<<endl;
	cout<<endl<<endl;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M2 "<<endl<<M2<<endl;
	cout<<":::::: M2-=M4 ::::::"<<endl;
	M2-=M4;
	cout<<endl<<endl;
	cout<<"Values of Matrix M4 "<<endl<<M4<<endl;
	cout<<"Values of Matrix M2 "<<endl<<M2<<endl;
	cout<<endl<<endl;

	/* Function Calling Operator () */
	cout<<"::::::::::::--------- FUNCTION CALLING OPERATOR () ---------::::::::::::"<<endl<<endl;
	int rowNum, colNum; float value; float value2 ; const float pi=3.14;
	cout<<"Enter Row Number for Matrix M4 : "; cin>>rowNum;
	cout<<"Enter Column Number for Matrix M4 : "; cin>>colNum;
	cout<<"Enter Value :- "; cin>>value;
	M4(rowNum, colNum)=value;
	cout<<endl;
	cout<<M4<<endl<<endl;
	cout<<"Enter Row Number for Matrix M4 : "; cin>>rowNum;
	cout<<"Enter Column Number for Matrix M4 : "; cin>>colNum;
	value2=M4(rowNum, colNum);
	cout<<"Value 2= "<<value2<<endl;
	cout<<endl;
	cout<<"CONSTANT value assigning to M5 :::: "<<endl;
	cout<<"Enter Row Number for Matrix M5 : "; cin>>rowNum;
	cout<<"Enter Column Number for Matrix M5 : "; cin>>colNum;
	M5(rowNum, colNum)=pi;
	cout<<endl<<M5<<endl<<endl;

	/*::::::::::: The End :::::::::::*/
	cout<<"Good Bye\nTC!!!"<<endl;

	return 0;
}
