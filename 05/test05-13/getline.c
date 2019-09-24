#include<stdio.h>

int getlines(char *s,int lim){
    int c;
    char *t = s;
    while(lim-- >0 && (c =getchar()) != EOF && c != '\n'){
        *s++ = c;
    }
    if (c == EOF){
        return s - t;
    }
    if(c = '\n'){
        *s++ = c ;
    }
    *s = '\0';
    return s - t;
        
}

