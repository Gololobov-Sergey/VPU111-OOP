#pragma once
class Time
{
	int h, m, s;

public:
	Time() : Time(0) {/*4*/}
	Time(int s) : Time(0, s) {/*3*/}
	Time(int m, int s) : Time(0, m, s) {/*2*/}
	Time(int h, int m, int s);
};

Time::Time(int h, int m, int s)
{
	/*1*/
}