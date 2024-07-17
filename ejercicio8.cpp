#include<iostream>

using namespace std;

int main(){
	int matriz[5][5]={
	{1,2,3,4,5},
	{6,7,8,9,10},
	{11,12,13,14,15},
	{16,17,18,19,20},
	{21,22,23,24,25}
	};
	for(int j=0;j<2;j++){
		for(int k=j;k<5-j;k++){
			if(k==j){
				for(int m=j;m<5-j;m++){
				    cout<<matriz[0+j][m]<<" ";
				}
			}else{
		        cout<<matriz[k][4-j]<<" ";
			}
		}
		for(int o=4-j;o>0+j;o--){
			if(o==4-j){
				for(int n=3-j;n>=0+j;n--){
				cout<<matriz[4-j][n]<<" ";
				}
			}else{
				cout<<matriz[o][j]<<" ";
			}
		}
		if(j==1){
			cout<<matriz[2][j+1];
		}
	}
	return 0;
}