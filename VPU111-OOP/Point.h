#pragma once
class Point
{
	int x = 0, y = 0;
	
public:
	static int count;
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
		count++;
	}

};

int Point::count = 0;