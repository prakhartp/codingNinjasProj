

class Fraction{

	int num;
	int deno;

	public:
	Fraction(int num, int deno){
		this->num = num;
		this->deno = deno;
		simplify();
	}
	// First fraction is pointed to by this and second fraction is passed
	void add(Fraction f){
		this->num =  this->num * f.deno + this->deno * f.num;
		this->deno = this->deno * f.deno;
		simplify();
	}
	
	// Simplify current Fraction(pointed to by this)
	void simplify(){
		int gcd = 1;
		int smallerNum = min(num, deno);
		for(int i = 2; i <= smallerNum; i++){
			if(num % i == 0 && deno % i == 0){
				gcd = i;
			}
		}
		num = num / gcd;
		deno = deno / gcd;
	}

	void print(){
		cout << num << "/" << deno << endl;
	}



};
