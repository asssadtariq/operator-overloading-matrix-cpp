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

Matrix::Matrix() {
	 rows=2;
	 cols=2;
	 Matrix_MM=new float* [rows];
	 for (int i=0; i<rows; i++){
		 Matrix_MM[i]=new float[cols];
	 }
	 for (int i=0; i<rows; i++){
		 for (int j=0; j<cols; j++)
			 Matrix_MM[i][j]=0.0;
	 }
}

Matrix::Matrix(int R, int C) {
	 rows=R;
	 cols=C;
	 Matrix_MM=new float* [rows];
	 for (int i=0; i<rows; i++){
		 Matrix_MM[i]=new float[cols];
	 }
	 for (int i=0; i<rows; i++){
		 for (int j=0; j<cols; j++)
			 Matrix_MM[i][j]=0.0;
	 }
}

Matrix::Matrix(const Matrix& MAT){
	rows=MAT.rows;
	cols=MAT.cols;
	Matrix_MM=new float* [rows];
	for (int i=0; i<rows; i++){
		Matrix_MM[i]=new float[cols];
	}

	 for (int i=0; i<rows; i++){
		 for (int j=0; j<cols; j++)
			 Matrix_MM[i][j]=MAT.Matrix_MM[i][j];
	 }
}

void Matrix::setRows(int R){
	rows=R;
	Matrix_MM=new float* [rows];
	for (int i=0; i<rows; i++)
		Matrix_MM[i]=new float [cols];

	 for (int i=0; i<rows; i++){
		 for (int j=0; j<cols; j++)
			 Matrix_MM[i][j]=0.0;
	 }
}

void Matrix::setCols(int C){
	cols=C;
	Matrix_MM=new float* [rows];
	for (int i=0; i<rows; i++)
		Matrix_MM[i]=new float [cols];

	 for (int i=0; i<rows; i++){
		 for (int j=0; j<cols; j++)
			 Matrix_MM[i][j]=0.0;
	 }
}
int Matrix::getRows() const{
	return rows;
}
int Matrix::getCols() const{
	return cols;
}

float Matrix::getValue(int R, int C) const{
	if ( (R>=0 && R<rows) && (C>=0 && C<cols)){
		return Matrix_MM[R][C];
	}
	else {
		if (R<0 || R>rows)
			cout<<"INVALID ROW NUMBER !!!"<<endl<<endl;
		else if (C<0 || C>cols)
			cout<<"INVALID COLUMN NUMBER !!!"<<endl<<endl;
		else
			cout<<"INVALID ROW AND COLUMN NUMBER !!!"<<endl<<endl;
		return 0.0;
	}
}


float& Matrix::operator () (int& R, int& C){
	if ( (R>=0 && R<rows) && (C>=0 && C<cols)){
		return Matrix_MM[R][C];
	}
	else {
		if (R<0 || R>rows)
			cout<<"INVALID ROW NUMBER !!!"<<endl<<endl;
		else if (C<0 || C>cols)
			cout<<"INVALID COLUMN NUMBER !!!"<<endl<<endl;
		else
			cout<<"INVALID ROW AND COLUMN NUMBER !!!"<<endl<<endl;
	}
}


float& Matrix::operator () (int& R, int& C) const {
	if ( (R>=0 && R<rows) && (C>=0 && C<cols)){
		return Matrix_MM[R][C];
	}
	else {
		if (R<0 || R>rows)
			cout<<"INVALID ROW NUMBER !!!"<<endl<<endl;
		else if (C<0 || C>cols)
			cout<<"INVALID COLUMN NUMBER !!!"<<endl<<endl;
		else
			cout<<"INVALID ROW AND COLUMN NUMBER !!!"<<endl<<endl;
	}
}

Matrix& Matrix::operator = (const Matrix& MAT){
	rows=MAT.rows;
	cols=MAT.cols;
	for (int i=0; i<rows; i++){
		for (int j=0; j<cols; j++)
			Matrix_MM[i][j]=MAT.Matrix_MM[i][j];
	}
	return *this;
}

bool Matrix::operator == (const Matrix& MAT){
	if (rows != MAT.rows && cols != MAT.cols){
		return 0;
	}

	else {
		for (int i=0; i<rows; i++){
			for (int j=0; j<cols; j++){
				if (Matrix_MM[i][j] != MAT.Matrix_MM[i][j])
					return 0;
			}
		}
	}

	return 1;
}

Matrix Matrix::operator + (const Matrix& MAT){
	Matrix temp;
	if (rows==MAT.rows && cols==MAT.cols){
		Matrix SUM(rows, cols);

		for (int i=0; i<rows; i++){
			for (int j=0; j<cols; j++){
				SUM.Matrix_MM[i][j]=Matrix_MM[i][j]+MAT.Matrix_MM[i][j];
			}
		}

		return SUM;
	}

	else {
		cout<<"Addition is NOT POSSIBLE !!!"<<endl<<endl;
		return temp;
	}
}

Matrix Matrix::operator - (const Matrix& MAT){
	Matrix temp;
	if (rows==MAT.rows && cols==MAT.cols){
		Matrix SUB(rows, cols);

		for (int i=0; i<rows; i++){
			for (int j=0; j<cols; j++){
				SUB.Matrix_MM[i][j]=Matrix_MM[i][j]-MAT.Matrix_MM[i][j];
			}
		}

		return SUB;
	}

	else {
		cout<<"Subtraction is NOT POSSIBLE !!!"<<endl<<endl;
		return temp;
	}
}

Matrix Matrix::operator * (const Matrix& MAT){
	Matrix temp;
	if (cols == MAT.rows){
		Matrix MUL (rows, MAT.cols);

		for (int i=0; i<rows; i++){
			for (int j=0; j<cols; j++){
				MUL.Matrix_MM[i][j]=0;
				for (int k=0; k<MAT.cols; k++){
					MUL.Matrix_MM[i][j]=MUL.Matrix_MM[i][j]+(Matrix_MM[i][k]*MAT.Matrix_MM[k][j]);
				}
			}
		}

		return MUL;
	}
	else {
		cout<<"Multiplication is NOT POSSIBLE !!!"<<endl<<endl;
		return temp;
	}
}

Matrix Matrix::operator ++ (int obj){
	Matrix temp;
	temp=*this;

	for (int i=0; i<rows; i++){
		for (int j=0; j<cols; j++)
			Matrix_MM[i][j]=Matrix_MM[i][j]+1;
	}

	return temp;
}

void Matrix::operator += (const Matrix& MAT){
	if (rows==MAT.rows && cols==MAT.cols){
		for (int i=0; i<rows; i++){
			for (int j=0; j<cols; j++){
				Matrix_MM[i][j]=Matrix_MM[i][j]+MAT.Matrix_MM[i][j];
			}
		}
	}
	else {
		cout<<"ADDITION is not possible !!!!!"<<endl<<endl;
	}
}
void Matrix::operator -= (const Matrix& MAT){
	if (rows==MAT.rows && cols==MAT.cols){
		for (int i=0; i<rows; i++){
			for (int j=0; j<cols; j++){
				Matrix_MM[i][j]=Matrix_MM[i][j]-MAT.Matrix_MM[i][j];
			}
		}
	}
	else {
		cout<<"SUBTRACTION is not possible !!!!!"<<endl<<endl;
	}
}


Matrix::~Matrix() {

}

ostream& operator << (ostream& OUT, const Matrix& MAT){
	OUT<<endl;
	for (int i=0; i<MAT.rows; i++){
		for (int j=0; j<MAT.cols; j++)
			OUT<<MAT.Matrix_MM[i][j]<<"\t";
		OUT<<endl;
	}
	return OUT;
}

istream& operator >> (istream& IN, const Matrix& MAT){
	cout<<endl;
	for (int i=0; i<MAT.rows; i++){
		for (int j=0; j<MAT.cols; j++){
			cout<<"Enter for ROW ["<<i+1<<"] and COLUMN ["<<j+1<<"] : ";
			IN>>MAT.Matrix_MM[i][j];
		}
	}
	return IN;
}
