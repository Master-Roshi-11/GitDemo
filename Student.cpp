#include<iostream>
#include "Student.h"
#include<vector>
//#include "main.cpp"
using namespace std;

extern vector<int> int_vec;
//extern int num;
Student::Student()
{
}

Student::~Student()
{
}

void Student::display()
{
	
	int num=10;
	num++;
	cout<<"Value of Num : "<<num<<" in Student Class"<<endl;
	int_vec.push_back(18);
	int_vec.push_back(12);
	int_vec.push_back(15);
	int_vec.push_back(16);
	int_vec.push_back(91);
}
