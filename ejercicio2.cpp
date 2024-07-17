#include<iostream>

using namespace std;

int main(){
	int matriz[3][3]={
	{1,2,3},
	{4,2,6},
	{7,2,9}
	};
	int buscador;
	int contador;
	cout<<"segun a la matriz: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"escribir el valor que se debe encontrar: ";
	cin>>buscador;
	cout<<"la ubicaion del valor de "<<buscador<<endl;
	for(int m=0;m<3;m++){
		for(int n=0;n<3;n++){
			if(matriz[m][n]==buscador){
				cout<<"-es la Fila "<<m<<" ,Columna "<<n<<endl;
			}else{
				contador++;
			}
		}
	}
	if(contador==9){
		cout<<"no se encuentra en la matriz";
	}
	return 0;
}