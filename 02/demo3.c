#include <stdio.h>
unsigned gest_betis(unsigned x,int p,int n);
int main(){ 
    unsigned  int res ;
    unsigned int s = 5;
    res = gest_betis(8,2,3);
    //        0000 0000 0000 0101
    printf("%d",res);
}


unsigned gest_betis(unsigned x, int p, int n){
 
     //        0000 0000 0000 0101  >> 4+1 -3 =2

     //        0000 0000 0000 0001

     //        0000 0000 0000 0000 ~
     //        1111 1111 1111 1111 << 3
     //        1111 1111 1111 1000 ~
     //        0000 0000 0000 0111 

    // 0000 0000 0000 0001 
    // 0000 0000 0000 0111

    printf("--->%d\n",x >> (p+1-n));
    return (x >> (p+1-n) & ~(~0<<n));

}