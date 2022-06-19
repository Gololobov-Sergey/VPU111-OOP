#pragma once
class Point
{
	int x = 0, y = 0;
	const int z;
	static int count;
public:
	
	Point(int x, int y, int z) : z(z)
	{
		this->x = x;
		this->y = y;
		count++;
	}
	~Point() { count--; }

	static int getCount() 
	{ 
		return count; 
	}

	void print() const
	{
		cout << "(X = " << x << ", Y = " << y << ", Z = " << z << ")" << endl;
	}
};

int Point::count = 0;