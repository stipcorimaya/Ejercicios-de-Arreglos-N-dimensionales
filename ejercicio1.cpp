#include<iostream>

using namespace std;

int main(){
	int matrizA[3][3]= {
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };
	int matrizB[3][3]={
    {9,8,7},
    {6,5,4},
    {3,2,1}
    };
    int acumulador;
	int matrizC[3][3];
		
	for(int i=0;i<3;i++){
		cout<<"|";		
		for(int n=0;n<3;n++){
			cout<<matrizA[i][n]<<" ";
		}
		if(i==1){
		cout<<"|  x  |";	
		}else{
		cout<<"|     |";			
		}
		for(int o=0;o<3;o++){
		cout<<matrizB[i][o]<<" ";
	    }
		if(i==1){
		cout<<"|  =  |";	
		}else{
		cout<<"|     |";			
		}
		for(int k=0; k<3; k++){
			for(int j=0; j<3;j++){
			acumulador=(matrizA[i][j]*matrizB[j][k])+acumulador;
			}
			matrizC[i][k]=acumulador;
			acumulador=0;			
			cout<<matrizC[i][k]<<" ";
		}
		cout<<"|"<<endl;
	}
	return 0;
}
