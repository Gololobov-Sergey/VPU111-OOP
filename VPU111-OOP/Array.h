#pragma once
#include<iostream>

using namespace std;


class Array
{
	int* arr = nullptr;
	int size = 0;

public:
	Array() {}

	explicit Array(int n)
	{
		size = n;
		arr = new int[n] {0};
	}

	~Array()
	{
		delete[] arr;
	}

	Array(const Array& obj)
	{
		size = obj.size;
		arr = new int[size];
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
};

