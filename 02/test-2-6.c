#include<stdio.h>
unsigned setbits(unsigned x,int p,int n,unsigned y);
int main(){
    unsigned int s ;
    s = 77;
    unsigned int b;
    b = 22;
    unsigned int sb = setbits(s,4,3,b);
    printf("%d\n",sb);
    return 0;

}
unsigned setbits(unsigned x,int p,int n,unsigned y){
    return x& ~(~(~0 << n) << (p+1-n)) |  (y&  ~( ~0 << n))  << (p+1-n); 
}

 
