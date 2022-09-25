#pragma once
using namespace std;
template <class T>
class Matrix
{
private:
	int _row;
	int _column;
	T** _data;
public:
	Matrix();
	Matrix(size_t row, size_t column);
	void set(int _row, int _column, const T &value);
	T* get(int _row, int _column);
	int rows(int _rows);
	int ñolumns(int _columns);
	void operator=(const Matrix<T>& set);
	T* matrix_sum(const Matrix<T>&get, const Matrix<T>&set);
	~Matrix();
};