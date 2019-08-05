#include <stdio.h>
int binsearh(int x,int v[],int n);


int main(){

    return 0;
}


int binsearh(int x,int v[],int n){
   
    int  high = n - 1;
    if (x == v[high]){
	return x;
    }else if(x < v[high]){
	return -1; 
    }else{
	binsearh(x,v, n/2);}
}
