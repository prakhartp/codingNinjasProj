
class Student{
	
	public:

	int rollNo;	
	int marks;
	int phn;


	Student(){
		cout << "Constructor called  - 0" << endl;
	}

	Student(int rollNo, int marks){
		cout << "Constructor called  - 2" << endl;
		this->rollNo = rollNo;
		this->marks = marks;
		this->phn = 0;
	}


	Student(int rollNo, int marks, int phn){
		cout << "Constructor called - 3" << endl;
		this->rollNo = rollNo;
		this->marks = marks;
		this->phn = phn;
	}

	~Student(){
			cout << "Destructor Called " << endl;
	}


	void print(){
		cout << rollNo << " " << marks <<  " " << phn << endl; 
	}


	void setRollNo(int rollNo){
		
		cout << this << endl;

		if(rollNo < 0){
			return;
		}
		this->rollNo = rollNo;
	}
	
	//private:
	int getRollNo(){
		return rollNo; // this->rollNo
	}
	//public:
};

/*
int main(){

Student s;
s.marks
}*/
