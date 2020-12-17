#include<iostream>
using namespace std;
#include "Student.h"

int main(){

	
	Student s1;
	Student s2;

	//s1.rollNo = -10;

	s1.setRollNo(10);
	s2.setRollNo(20);

	cout << s1.getRollNo() << endl;

	Student* s3 = new Student;
	(*s3).marks = 188;	
	s3->marks = 100;
	/*
	s1.marks = 70;
	s2.marks = 100;
	cout << s1.marks << endl;
	cout << s2.marks << endl;
	*/
}

