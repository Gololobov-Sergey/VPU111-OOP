#include<iostream>
#include<Windows.h>
#include"Student.h"

using namespace std;

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


	Student st("Федір", 20);
	st.setMark(12);
	st.setMark(12);
	st.setMark(12);


	Student* st2 = new Student("Olga", 25);
	st.print();
	st2->print();

	cout << "Привіт" << endl;


	system("pause");
}