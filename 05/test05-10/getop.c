#include<ctype.h>
#include<stdio.h>
#include "expr.h"

int getop(char *s,char *t){
   int i = 0;
   int c ;
   int num = 0;
    // 12 + 23 + 
   while((c = t[i++]) != '\0'){
        if(!isdigit(c) && c != '.'){
            if(i == 1){ 
                return c;
            }else{
                return ERRORVAL;
            } 
        }
        if(isdigit(c) || c == '.'){
            s[num++] = c;
        }
                                       
   }
   s[i] = '\0';
   return NUMBER;

}
