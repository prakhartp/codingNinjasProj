
class Student{

	public:
	
	char* name;
	int rollNo;
	int marks;


	Student(char* name, int rollNo = 0, int marks = 0){
		this->rollNo = rollNo;
		this->marks = marks;
		//this->name = name; // Shallow Copy

		// Deep Copy
		this->name = new char[strlen(name) + 1];
		for(int i = 0; i <= strlen(name); i++){
			this->name[i] = name[i];
		}
		// strcpy(this->name, name);
	}

	void print(){
		cout <<"Name " << name <<  " RollNo " << rollNo <<  " marks " << marks << endl; 
	}

};
