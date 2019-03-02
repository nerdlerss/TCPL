#include <stdio.h>
#include "calc.h"
#include <stdlib.h>
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;
static int keynum= 0;
int getchs(char s[]){
    printf("=====keynum  %d \n ",keynum);
    int resval = s[keynum++];
    return (bufp >0) ? buf[--bufp]:resval;
}

void setnum(void){
    keynum = 0;
}

void ungetch(int s){
    if(bufp >=BUFSIZE){
        printf("ERROR ungetch:too many characters");
    }else{
        buf[bufp++] = s;
    }
}

void ungets(char p[]){
     if(bufp >=BUFSIZE){
        printf("ERROR ungetch:too many characters");
    }else{
        buf[bufp++] = *p;
    }
}