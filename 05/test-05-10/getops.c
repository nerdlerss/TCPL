#include <stdio.h>
#include <ctype.h>
#include "calc.h"
#include "calc.h"
int getops(char s[],char once_val[]){
    printf("getops s ==>%s\n",once_val);
    int i,c;
    while ((s[0]  = c = getchs(once_val)) == ' ' || c == '\t'){
        //printf("del seme val\n");
    } 
    printf("s [0] === > %c\n",s[0]);
    s[1] = '\0';
    if (!isdigit(c) && c != '.'){
        // not a num
        return c;
    }
    i = 0;
    if(isdigit(c)){
        while (isdigit(s[++i] = c = getchs(once_val)))
            //printf("get num\n");
        ;
    }
    if(c=='.'){
         while (isdigit(s[++i] =c=  getchs(once_val)))
              //printf("get .\n");
        ;
    }
    s[i] = '\0';
    //  printf("c---- %d\n",c);
    return NUMBER;
}   