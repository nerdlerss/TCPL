#include <stdio.h>

unsigned invert(unsigned x,int p,int n);
int main(){
	unsigned int s;
	s = 77;
	unsigned int val;
	val = invert(s,4,3);
	printf("val : %d \n",val);
	return 0;	
}
	
unsigned invert(unsigned x,int p,int n){
	return  (~(~0 << n) << (p+1 -n)) ^ x ; 
}
