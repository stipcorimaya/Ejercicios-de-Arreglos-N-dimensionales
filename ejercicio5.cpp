#include<iostream>

using namespace std;

int main(){
	int matrizA[4][4];
	int mayor, menor;
	cout<<"escribe los elementos de una matriz 4x4: "<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"a"<<i<<j<<": ";
			cin>>matrizA[i][j];
		}
		cout<<endl;
	}
	mayor=matrizA[0][0];
	menor=matrizA[0][0];
	return 0;
}