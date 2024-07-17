#include<iostream>

using namespace std;

int main(){
	int matriz[4][4]={
	{1,2,3,4},
	{5,6,7,8},
	{9,1,2,3},
	{4,5,6,7}
	};
	cout<<"segun la matriz 4x4: "<<endl;
	for(int m=0;m<4;m++){
		for(int n=0;n<4;n++){
			cout<<matriz[m][n]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"su rotacion en 90 grados en sentido horario es: "<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matriz[3-j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}