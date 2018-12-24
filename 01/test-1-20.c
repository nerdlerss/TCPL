#include<stdio.h>
#define TABINC 8
int main(){
    int c;
    int pos;
    int nb;   
    pos = 0;
    while ((c = getchar()) != EOF){
        if ( c == '\t' ){
            //printf space
            nb = TABINC - pos % TABINC;
            while(nb>0){
                putchar('*');
                --nb;
            }
            pos = 0;
        }else if( c == '\n' ){
            //clean inter num 
            putchar(c);
            pos = 0;
        }else{
            //in the 
            putchar(c);
            ++pos;
        }
    }

}
