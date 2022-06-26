#pragma once
#include<iostream>

using namespace std;

class Drob
{
	int ch, zn;

public:
	Drob() :Drob(0) {}
	explicit Drob(int ch) : Drob(ch, 1) {}
	Drob(int ch, int zn)
	{
		this->zn = (zn == 0) ? 1 : zn;
		this->ch = ch;
	}

	void print()
	{
		cout  << ch << "/" << zn << endl;
	}

	Drob& operator++() // pre
	{
		ch += zn;
		return *this;
	}

	Drob operator++(int) //post
	{
		Drob temp(*this);

		ch += zn;

		return temp;
	}

	Drob operator-()
	{
		return Drob(-ch, zn);
	}


	Drob add(Drob d)
	{
		return Drob();
	}

	Drob operator-(Drob d1)
	{
		return Drob();
	}

	Drob operator*(Drob d1)
	{
		return Drob();
	}

	Drob operator*(int d1)
	{
		return Drob();
	}

	bool operator>(Drob d)
	{
		return (float)ch / zn > (float)d.ch / d.zn;
	}

	bool operator==(Drob d)
	{
		return (float)ch / zn == (float)d.ch / d.zn;
	}
};


Drob operator+(Drob d1, Drob d2)
{
	return Drob();
}

Drob operator*(int d1, Drob d2)
{
	return Drob();
}
