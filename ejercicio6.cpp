#include<iostream>

using namespace std;

int main(){
	int matriz[5][5]={
		{1,2,3,4,5},
		{6,7,8,9,1},
		{2,3,4,5,6},
		{7,8,9,1,2},
		{3,4,5,6,7}
	};
	cout<<"el reflejo de la matriz: "<<endl;
	int matrizA[5][5];
	for(int i=0;i<5;i++){
		cout<<"| ";
		for(int m=0;m<5;m++){
			cout<<matriz[i][m]<<" ";
		}
		if(i==2){
			cout<<" |  =  | ";
		}else{
		cout<<" |     | ";			
		}
		for(int j=0;j<5;j++){
			matrizA[i][j]=matriz[i][4-j];
			cout<<matrizA[i][j]<<" ";
		}
		cout<<" |"<<endl;
	}
	return 0;
}