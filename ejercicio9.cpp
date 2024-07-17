#include<iostream>

using namespace std;

int main(){
	int orden;
	cout<<"escribe el tamanio o el orden de la matriz: "<<endl;
	cin>>orden;
	if(orden>0){
		cout<<"su cuadrado latino de orden "<<orden<<" es:"<<endl;
		int matriz[orden][orden];
		for(int i=0;i<orden;i++){
		    if(i==0){
		        for(int j=0;j<orden;j++){
				    matriz[i][j]=j+1;
			        cout<<matriz[i][j]<<" ";
		        }
		        cout<<endl;
		    }else{
			    for(int k=0;k<orden;k++){
				    if(k!=0){
					    matriz[i][k]=matriz[i-1][k-1];
				    }else{
					    matriz[i][k]=matriz[i-1][orden-1];
				    }
				    cout<<matriz[i][k]<<" ";
			    }
			    cout<<endl;
		    }
	    }
	}else{
		cout<<"el tamanio u orden ingresado, debe ser mayor que cero";
	}

	return 0;
}