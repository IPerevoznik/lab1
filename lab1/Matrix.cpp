#include "Matrix.h"
using namespace std;
template <class T>
Matrix<T>::Matrix(size_t row, size_t column)
{
	this->row = row;
	this->_column = column;
	this->*_data = new T[row];
	for (int i = 0; i < row;i++) {
		_data[i] = new T[column];
	}
}
template <class T>
Matrix<T>::Matrix() {
	this->_data = new T[1];
	for (int i = 0; i < sizeof(T);i++) {
		this->*_data = new T[1];
	}
	this->_rows = 1;
	this->_column = 1;
}
template <class T>
void Matrix<T>::set(int _row, int _column, const T& value) {
		this->_data[_row][_column] = T;
	
}
template <class T>
T* Matrix<T>::get(int _row, int _colum) {
		return T;
}
template <class T>
int Matrix<T>::rows(int _rows) {
	return _row;
}
template <class T>
int Matrix<T>::ñolumns(int _columns) {
	return _column;
}
template <class T>
void Matrix<T>::operator =(const Matrix<T>&set) {
	for (int i = 0; i < this->rows; i++) {
		delete[]this->data[i];
	  }
	this->_row = set._row;
	this->_column = set._column;
	for (int i = 0; i < this->_rows;i++) {
		for (int j = 0; j < this->_column;j++) {
			this->_data[i][j] = set._data[i][j];
		}
	}
}
template <class T>
T* Matrix<T>::matrix_sum(const Matrix<T>& get, const Matrix<T>& set) {

}


template <class T>
Matrix<T>::~Matrix() {
	for (int i = 0; i < _data; i++) {
		delete[] *_data;
	}
}