#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include <initializer_list>
#include <iostream>
#include <vector>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

class Matrix {
public:
    Matrix();
    Matrix(int rows, int columns);
    Matrix(const initializer_list<const initializer_list<double>> &m);
    void random_fill(double min, double max);
    void set(double num, int row, int column);
    Matrix admult(Matrix B);
    double trace();
    double det();
    double norm();
    double max();
    double sum();
    void copy(Matrix m);
    void get_bin(ifstream& in);
    void write_bin(ofstream& out);
    Matrix inv();
    Matrix minor(int row, int column);
    double angle(Matrix B);
    double dot(Matrix B);
    double get(int row, int column) const;
    int rows() const;
    int columns() const;
    int rang();
    void add_matrix(Matrix m);
    Matrix slice(int start_row, int start_column, int end_row, int end_column);
    virtual ~Matrix();
    Matrix T();
    Matrix operator+(Matrix B);
    Matrix operator+(double B);
    Matrix operator-(Matrix B);
    Matrix operator*(double B);
    Matrix operator*(Matrix B);
    Matrix operator/(double B);
    Matrix operator/(Matrix m);
    friend ostream &operator<<(ostream& os, const Matrix& m);
    friend ifstream &operator<<(Matrix& m, ifstream& in);
    friend ofstream &operator>>(Matrix& m, ofstream& out);
    friend class PCA;
protected:
    int _rows;
    int _columns;
    vector<vector<double>*>* _data = nullptr;

};

ostream& operator<<(ostream& os, const Matrix& m);

#endif // MATRIX_H_INCLUDED
