#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

int main(int argc,char *argv[]){
    //ungets(" ");
    //ungets(*++argv);
    //2.3  2.2 +
     
    char s[MAXOP];
    double op2;
    printf("argc -- > %d\n",argc);
    int res = argc;
    while(--argc >0){
        //printf("val is here :%s\n",argv[res-argc]);
        char num_key = getops(s,argv[res-argc]);
   
        switch(num_key){
            case NUMBER:
                //printf("NUMBER\n");
                push(atof(s));
                break;
            case '+':
                //printf("plus\n");
                push(pop() + pop());
                break;
            default:
                //printf("default\n");
                break;
        }
        setnum();
        printf("------------once get -----------\n");
    }
       
    printf("over val ===  \t%.8g\n",pop());
                 
    return 1;
}