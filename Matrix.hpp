#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

namespace zich
{
    class Matrix
    {
    private:
        int row;
        int col;
        vector<double> data;

    public:
        Matrix(const int row,const int col);
        Matrix(const vector<double> input, const int row, const int col);

        ~Matrix();

        Matrix operator-(const Matrix &mat);
        Matrix& operator--();
        Matrix operator--(const int num);
        Matrix& operator-=(const Matrix &mat);


        Matrix operator+(Matrix const &mat);
        Matrix& operator++();
        Matrix operator++(const int num);
        Matrix& operator+=(const Matrix &mat);

        Matrix operator*(const Matrix &mat);
        Matrix& operator*=(const Matrix &mat);

        Matrix operator*(const double scalar);
        Matrix& operator*=(const double scalar);

        bool operator>(Matrix &mat);
        bool operator>=(Matrix &mat);
        bool operator<(Matrix &mat);
        bool operator<=(Matrix &mat);
        bool operator==(Matrix &mat);
        bool operator!=(Matrix &mat);

        double mat_mul(const Matrix &mat, const int row_temp, const int col_temp);
        double mat_sum();

        friend Matrix operator-(Matrix &mat);
        friend Matrix operator+(Matrix &mat);
        friend Matrix operator*(const double scalar, Matrix &mat);

        friend ostream & operator << (ostream &out, const Matrix &mat);
        friend istream& operator>> (istream &os , Matrix& mat);
    };
}