#include<iostream>
using namespace std;
#include "Student.h"

void copyAssignmentOperator(){


	Student s1(5,50,111);
	
	// Copy Constructor
	Student s2(s1);

	Student s3 = s1; // Copy Constructor called
	//Student s3;
	// s3 = s1;

	Student *s4 = new Student();
	delete s4;
//	s1.print();

	//s2 = s1;

/*	s2.rollNo = s1.rollNo;
	s2.marks = s1.marks;
	s2.phn = s1.phn;
*/
//	s2.print();

}


int main(){

		copyAssignmentOperator();
		cout << "Inside Main " << endl;
	//int i;

//	Student s1(5, 50, 10111);
//	cout << s1.marks << endl;
	/*
	s1.rollNo = 5;
	s1.marks = 50;
	s1.phn = 100111;
*/

//	Student s2(5, 50);

/*
	Student s2;

	s2.rollNo = 6;
	s2.marks = 55;
	s2.phn = 100115;
	*/		

/*
	Student s1;
	Student s2;

	s1.rollNo = 15;
	//cout << s1.rollNo << endl;

	s2.rollNo = 19;
	//cout << s2.rollNo << endl;
	
	Student *s3 = new Student;
	cout << s3 << endl;
	//(*s3).rollNo = 18;
	//cout << s3->rollNo << endl;
	s3->setRollNo(10);
	cout << s3->getRollNo() << endl;
	*/
}

