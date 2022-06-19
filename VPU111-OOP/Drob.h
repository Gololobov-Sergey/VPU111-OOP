#pragma once
#include<iostream>

using namespace std;

class Drob
{
	int ch, zn;

public:
	Drob() :Drob(0) {}
	Drob(int ch) : Drob(ch, 1) {}
	Drob(int ch, int zn)
	{
		this->zn = (zn == 0) ? 1 : zn;
		this->ch = ch;
	}

	void print()
	{
		cout  << ch << "/" << zn << endl;
	}

	Drob add(Drob d)
	{
		return Drob();
	}

	Drob operator-(Drob d1)
	{
		return Drob();
	}
};


Drob operator+(Drob d1, Drob d2)
{
	return Drob();
}
