#include<stdio.h>
int main(){
     int c;
     int b;
     b = 1;
     while (b){
         b = ((c = getchar()) != EOF);
         printf("%d---",b);
     }
};
