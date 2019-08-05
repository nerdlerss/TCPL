#include<stdio.h>

unsigned rightrot (unsigned x,int n);

int getwordlength(void);

int main(){
    int i = getwordlength();
    unsigned  x,y; 
    x = 77;
    y = rightrot(x,3);
    printf("====>>%u\n",y);
    return 0;

}

unsigned rightrot (unsigned x,int n){
    unsigned  val,res;
    res = x;
    while(n-- >  0){
	val = (x & 1)<< 31;	
	x = x >> 1;
	res = (res >> 1) | val; 
    }

    return res;
}


int getwordlength(void){
    unsigned s = (unsigned) ~0;
    int i;
    for(i= 0;(s = s>> 1)> 0;i++)
	;
    return i+1;
}

