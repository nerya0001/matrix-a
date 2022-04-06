#include "Matrix.hpp"

namespace zich
{
    // constractor
    Matrix::Matrix(const int row, const int col) {
    }

    // constractor
    Matrix::Matrix(const vector<double> input, const int row, const int col) {
    }

    // destractor
    Matrix::~Matrix() {
    }

    Matrix Matrix::operator+(Matrix const &mat) {
        vector<double> tempMat_data;
        Matrix result(tempMat_data, this->row, mat.col);
        return result;
    }

    Matrix &Matrix::operator++() {
        return *this;
    }

    Matrix Matrix::operator++(const int num) {
        Matrix copy = *this;
        return copy;
    }

    Matrix &Matrix::operator+=(const Matrix &mat) {
        return *this;
    }
    
    Matrix Matrix::operator-(const Matrix &mat) {
        vector<double> tempMat_data;
        Matrix result(tempMat_data, this->row, mat.col);
        return result;
    }

    Matrix &Matrix::operator--() {
        return *this;
    }

    Matrix Matrix::operator--(const int num) {
        Matrix copy = *this;
        return copy;
    }

    Matrix &Matrix::operator-=(const Matrix &mat) {
        return *this;
    }

    double Matrix::mat_mul(const Matrix &mat, const int row_temp, const int col_temp) {
        double sum = 0;  
        return sum;
    }

    Matrix Matrix::operator*(const Matrix &mat) {
        vector<double> tempMat_data;
        Matrix result(tempMat_data, this->row, mat.col);
        return result;
    }

    Matrix &Matrix::operator*=(const Matrix &mat) {
        return *this;
    }

    Matrix Matrix::operator*(const double scalar) {
        vector<double> tempMat_data;
        Matrix result(tempMat_data, this->row, this->col);
        return result;
    }

    Matrix &Matrix::operator*=(const double scalar) {
        return *this;
    }

    double Matrix::mat_sum() {
        double sum = 0; 
        return sum;
    }

    bool Matrix::operator>(Matrix &mat) {
        return this->mat_sum() > mat.mat_sum();
    }

    bool Matrix::operator>=(Matrix &mat) {
        return this->mat_sum() >= mat.mat_sum();
    }

    bool Matrix::operator<(Matrix &mat) {
        return this->mat_sum() < mat.mat_sum();
    }

    bool Matrix::operator<=(Matrix &mat) {
        return this->mat_sum() <= mat.mat_sum();
    }

    bool Matrix::operator==(Matrix &mat) {
        return true;
    }

    bool Matrix::operator!=(Matrix &mat) {
        return false;
    }

    ostream &operator<<(ostream &out, const Matrix &mat) {
        return out;
    }

    Matrix operator-(Matrix &mat) {
        Matrix result(mat.row, mat.col);
        return result;
    }
    
    Matrix operator+(Matrix &mat) {
        Matrix result(mat.row, mat.col);
        return result;
    }

    Matrix operator*(const double scalar, Matrix &mat) {
        vector<double> tempMat_data;
        Matrix result(tempMat_data, mat.row, mat.col);
        return result;
    }
}
