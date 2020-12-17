
class Student{
	
	int rollNo;
	
	public:
	int marks;
	int phn;

	void setRollNo(int num){
		if(num < 0){
			return;
		}
		rollNo = num;
	}
	
	//private:
	int getRollNo(){
		return rollNo;
	}
	//public:
};

/*
int main(){

Student s;
s.marks
}*/
