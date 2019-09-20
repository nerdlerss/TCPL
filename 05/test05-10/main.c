#include<stdio.h>
#include<stdlib.h>
#include "expr.h"
int main(int argc, char *argv[]){
        *argv++;
        int type;
         
        char s[MAXOP];
        while(--argc >  0 ){
            type = getop(s,*argv++);
            switch(type){
                case NUMBER:
                    push(atof(s));
                    break;
                case ERRORVAL:
                    printf("error : input val is NOT DEFINED\n");
                    break;
                case '+':
                    push(pop() + pop());  
                    break;
                defalut:
                    printf("error : unknow cmd \n");
                    break;
            }


        }
              
   printf("last val == %g\n",pop());
   return 1;
}
