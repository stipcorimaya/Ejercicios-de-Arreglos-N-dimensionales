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
	cout<<"segun la matriz escrita: "<<endl;
	for(int m=0;m<4;m++){
		cout<<"| ";
		for(int n=0;n<4;n++){
			cout<<matrizA[m][n]<<" ";
			if(mayor<=matrizA[m][n]){
				mayor=matrizA[m][n];
			}
			if(menor>=matrizA[m][n]){
				menor=matrizA[m][n];
			}
		}
		cout<<" |"<<endl;
	}
	cout<<endl;
	cout<<"la posicion del numero mayor "<<mayor<<" se encuentra: "<<endl;
	for(int p=0;p<4;p++){
		for(int q=0;q<4;q++){
			if(mayor==matrizA[p][q]){
				cout<<"fila: "<<p<<", columna: "<<q<<endl;
			}
		}
	}
	cout<<endl;
	cout<<"la posicion del numero menor "<<menor<<" se encuentra: "<<endl;
	for(int r=0;r<4;r++){
		for(int s=0;s<4;s++){
			if(menor==matrizA[r][s]){
				cout<<"fila: "<<r<<", columna: "<<s<<endl;
			}
		}
	}
	return 0;
}