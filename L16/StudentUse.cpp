#include<iostream>
using namespace std;
#include "Student.h"


int main(){

	char temp[] = "pqrs";


	Student s1(temp, 5, 80);
	
	 Student s2(s1);
	//Student s2; // Student* s2 = new Student;
	// Shallow Copy
	//s2 = s1;

	s1.rollNo = 10;
	s1.name[0] = 'd';


	s1.print();
	s2.print();
	cout << temp << endl;
}

