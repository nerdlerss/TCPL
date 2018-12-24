#include<stdio.h>
int main(){
    int c;
    int space,tab,nl;
    space =0;
    tab = 0;
    nl =0;
    while((c= getchar()) != EOF){
        if (c == '\n'){
            nl ++;
        }else if( c == '\t'){
            tab++;
        }else if ( c == ' ' ){
            space++;
        }
    }    
    printf("nl:%d tab:%d space:%d",nl,tab,space);
}
