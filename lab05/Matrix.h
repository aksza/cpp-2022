//
// Created by Aksza on 10/19/2022.
//

#ifndef CPP_2022_MATRIX_H
#define CPP_2022_MATRIX_H

#include <iostream>
#include <cstdlib>
#include <random>


using namespace std;

class Matrix {
public:
    Matrix( int mRows = 10, int mCols = 10 );
    Matrix(const Matrix& what);
    Matrix( Matrix&& what);
    ~Matrix();
    void fillMatrix(double value);
    void randomMatrix(int a, int b);
    void printMatrix(ostream& os = cout) const;
    static Matrix createSquareMatrix(int size);
    bool isSquare() const;
    int getRows() const {return this->mRows;}
    int getCols() const {return this->mCols;}
    friend Matrix operator + (const Matrix& x, const Matrix& y);
    friend Matrix operator * (const Matrix& x, const Matrix& y);
    friend istream & operator >> (istream& is, Matrix& mat);
    friend ostream & operator << (ostream& os, const Matrix& mat);
    double* operator [] (int index);
    double* operator [] (int index) const;
    Matrix & operator = (const Matrix& mat);
    Matrix & operator = (Matrix&& mat);
private:
    double ** mElements;
    int mRows;
    int mCols;
};


#endif //CPP_2022_MATRIX_H
