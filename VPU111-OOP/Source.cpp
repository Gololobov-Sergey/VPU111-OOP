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

void PrintArray(Array a)
{
	a.print();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitleA("VPU111-OOP");

	//Student student[2];
	/*student[0].setAge(30);
	student[0].setName("Федір");

	student[1].setAge(40);
	student[1].setName("Ольга");*/

	//student[0].print();
	//student[1].print();

	//cout << "Середній вік: " << getAvgAgeStudent(student, 2) << endl;


	//Student st("Федір", 20);
	//st.setMark(12); // setMark(const this, 12)
	//st.setMark(12);
	//st.setMark(12);

	//st.print();
	//{
	//	//1
	//	//Student st2(st);
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
	Drob d2(3, 7);
	Drob d3 = d1 - d2; // d1.operator-(d2)
	cout << d3 << endl;

	//cout << "Привіт" << endl;
	//

	system("pause");
}