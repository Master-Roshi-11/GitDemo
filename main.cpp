#include <iostream>
#include "Student.h"
#include<vector>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//extern int num=10;
extern vector<int> int_vec;
int main(int argc, char** argv) {

	int num=10;
	cout<<"Value of Num : "<<num<<" in Main Class"<<endl;
	Student s;
	s.display();
	num++;
	cout<<"Value of Num : "<<num<<" in Main Class"<<endl;
		return 0;
}
