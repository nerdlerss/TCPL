#include<stdio.h>
#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double f){
   if(sp < MAXVAL){
        val[sp++] = f;
    }else{
        printf("error stack is full,can't push  %g\n",f);
    }
}

double pop(void){
    if (sp > 0){
        double res_val = val[--sp];
        printf("res_var = %g \n",res_val);
        return  res_val;
    }else {
       printf("error stack is null\n");
    }
}
