#include<iostream>

using namespace std;

int main(){
	int matrizA[4][4];
	int acumulador=0;
	cout<<"escribe los valores de la primera matriz"<<endl;
	for(int ai=0;ai<4;ai++){
		for(int a=0;a<4;a++){
			cout<<"escribe el valor de  a"<<ai<<a<<": ";
			cin>>matrizA[ai][a];
		}
		cout<<endl;
	}
	for(int i=0;i<4;i++){
		cout<<"|";		
		for(int n=0;n<4;n++){
			cout<<matrizA[i][n]<<" ";
		}
		cout<<"|"<<endl;
		acumulador=matrizA[i][i]+matrizA[i][3-i]+acumulador;
	}
	cout<<"segun a la matiz escrita, la suma de los elementos de sus dos diagonales es: "<<acumulador;;
	return 0;
}