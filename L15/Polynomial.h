

class Polynomial{

	//int degCoeff[1000];

	int* degCoeff;
	int maxDegree;

	public:

	Polynomial(){
		degCoeff = new int[1];
		maxDegree = 0;
		degCoeff[0] = 0;	
	}

	Polynomial(int maxDegree){
		degCoeff = new int[maxDegree]{};
		this->maxDegree = maxDegree;
	}


	void setCoeff(int deg, int coeff){
		
		if(deg > maxDegree){
			// Save pointer to old array, so that you can copy its elements later
			int* temp = degCoeff;
			degCoeff 	= 	new int[deg + 1]{0};
			for(int i = 0; i <= maxDegree; i++){
				degCoeff[i] = temp[i];
			}
			/*
			for(int i = maxDegree + 1; i < deg; i++){
				degCoeff[i] = 0;
			}*/
			maxDegree = deg;
			delete [] temp;
		}
		degCoeff[deg] = coeff;
	}


	Polynomial add(Polynomial second){
		
		Polynomial ans(max(this->maxDegree, second.maxDegree));

		ans.degCoeff = new int[max(this->maxDegree, second.maxDegree)];


		int mindeg = min(this->maxDegree, second.maxDegree);
		int i = 0;
		for(; i <= deg; i++){
			ans.setCoeff(i, this->degCoeff[i] + second.degCoeff[i]);
			//ans.degCoeff[i] = ;
		}
	
		while(i <= this->maxDegree){
			ans.setCoeff(i, this->degCoeff[i]);
			i++;
		}
		while(i <= second.maxDegree){
			ans.setCoeff(i, seconddegCoeff[i]);
			i++;
		}	
	}


	~Polynomial(){

		delete [] degCoeff;

	}

	

};
