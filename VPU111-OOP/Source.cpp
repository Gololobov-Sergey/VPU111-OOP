#include<iostream>
#include<Windows.h>
#include"Student.h"
#include"Point.h"
#include"Array.h"
#include"Drob.h"

using namespace std;

void foo(Student st)
{
	st.print();
}

Student foo1()
{
	Student st("Olga", 25);
	st.print();
	return st;
}

template<class T>
void PrintArray(Array<T> a)
{
	a.print();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitleA("VPU111-OOP");

	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	printArray(arr, n);

	//cout << Sum(arr, 3, Drob(2,4)) << endl;

	/*int a = 9;
	float b = 8.8;

	decltype(a+b) x;*/

	Array<int> a(10);
	a.set();
	a.print();

	//Student student[2];
	/*student[0].setAge(30);
	student[0].setName("Ôåä³ğ");

	student[1].setAge(40);
	student[1].setName("Îëüãà");*/

	//student[0].print();
	//student[1].print();

	//cout << "Ñåğåäí³é â³ê: " << getAvgAgeStudent(student, 2) << endl;


	//Student st("Ôåä³ğ", 20);
	//st.setMark(12); // setMark(const this, 12)
	//st.setMark(12);
	//st.setMark(12);

	//st.print();
	//{
	//	//1
	//	//Student st2(st); //Student st2 = st;
	//	//st2.print();

	//	//2
	//	//foo(st);

	//	//3
	//	Student st1 = foo1();
	//	st1.print();
	//}
	//st.print();

	/*{
		Student* st2 = new Student("Olga", 25);
		st2->setMark(10);
		st.print();
		st2->print();
		delete st2;
	}*/

	/*cout << Point::getCount() << endl;
	{
		Point p(1, 2, 1);
		p.print();
		cout << p.getCount() << endl;
	}
	cout << Point::getCount() << endl;

	const int d(9);*/


	/*Array a(10);
	a.set();
	a.print();
	PrintArray(a);*/


	// ?:   .   ,     ::   sizeof()

	// -, +, *, /, % , ++a, a++, += , = , !, !=, ==, < > <= <=, 
	// >>, <<, [], new 

	Drob d1(4, 5);
	Drob d2(8, 10);
	//(d1++).print(); // d1.operator-(d2)
	//d1.print();
	//Drob d3 = -d1;
	//d3.print();
	d1 = d2 * 4;
	d1 = 4 * d1;
	if (d1 == d2)
		cout << "d1 > d2" << endl;
	else
		cout << "d1 <= d2" << endl;
	//cout << d3 << endl;
	
	
	/*Student st("Ôåä³ğ", 20);
	{
		Student st2("Olga", 25);
		st2.print();
		st2 = st2;
		st2.print();
	}
	st.print();*/

	//cout << "Ïğèâ³ò" << endl;
	//

	system("pause");
}