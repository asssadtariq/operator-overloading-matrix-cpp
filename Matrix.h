//============================================================================
/*
	Name: Asad Tariq
	Roll No: 19i-0659
	Section: E
	Department: CS
*/
//============================================================================

#include <iostream>
#ifndef MATRIX_H_
#define MATRIX_H_
using namespace std;

class Matrix {
	int rows;
	int cols;
	float** Matrix_MM;
public:
	Matrix();
	Matrix(int, int);
	Matrix(const Matrix&);

	void setRows(int);
	void setCols(int);
	int getRows() const;
	int getCols() const;
	float getValue(int, int) const;

	float& operator () (int& , int& );
	float& operator () (int& , int& ) const;
	Matrix& operator = (const Matrix&);
	bool operator == (const Matrix&);
	Matrix operator + (const Matrix&);
	Matrix operator - (const Matrix&);
	Matrix operator * (const Matrix&);
	Matrix operator ++ (int);
	void operator += (const Matrix&);
	void operator -= (const Matrix&);

	friend ostream& operator << (ostream&,const Matrix&);
	friend istream& operator >> (istream&,const Matrix&);

	~Matrix();
};

#endif /* MATRIX_H_ */
