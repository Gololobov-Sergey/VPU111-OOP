#pragma once
#include<iostream>

using namespace std;

template<class T>
class Array
{
	T* arr = nullptr;
	int size = 0;

public:
	Array() {}

	explicit Array(int n)
	{
		size = n;
		arr = new T[n] {0};
	}

	~Array()
	{
		delete[] arr;
	}

	Array(const Array& obj)
	{
		size = obj.size;
		arr = new T[size];
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = obj.arr[i];
		}
	}

	void set(int min = 0, int max = 9) const 
	{
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % (max - min + 1) + min;
		}
	}

	void print() const
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	T& operator[](int ind);

};

template<class T>
T& Array<T>::operator[](int ind)
{
	return arr[ind];
}
