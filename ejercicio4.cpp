#include<iostream>

using namespace std;

int main(){
	int matriz[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int matrizA[4][4];
	int a,b;
	cout<<"escibe un numero"<<endl;
	cin>>a;
	cout<<"escribe la fila que quieras intercambiar"<<endl;
	cin>>b;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==a or i==b){
				matrizA[a][j]=matriz[b][j];
				matrizA[b][j]=matriz[a][j];
			}else{
			matrizA[i][j]=matriz[i][j];		
			}
			cout<<matrizA[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}