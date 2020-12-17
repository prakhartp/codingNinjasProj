#include<iostream>
using namespace std;

// Typical example of a backtracking problem
void dftraversal(int** adjMatrix, int v, int currentVertex , bool* done){
    


	cout << currentVertex << " ";
    done[currentVertex] = true;
    for(int i = 0 ; i < v ; i++){
        if(adjMatrix[currentVertex][i] == 1){
            if(done[i] == false){  // Checking if this vertex hasn't already been printed
                dftraversal(adjMatrix, v , i , done);
            }
        }
    }

 


}


void dftraversal(int** adjMatrix, int v){
    bool * done = new bool[v]; // We are keeping this array  to keep a track of which vertices have been printed
	dftraversal(adjMatrix, v, 0 , done);
}


int main(){

	int v, e;

	cin >> v >> e;
	int** adjMatrix = new int*[v];	

	for(int i = 0; i < v; i++){
		adjMatrix[i] = new int[v]();
	}

	for(int i = 0; i < e; i++){
		int v1, v2;
		cin >> v1 >> v2;
		adjMatrix[v1][v2] = 1;
		adjMatrix[v2][v1] = 1;
	}
	
	dftraversal(adjMatrix , v);

}
   
