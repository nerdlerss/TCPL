#include<stdio.h>
#define  MAXVAL 100

int sp = 0;

double val[MAXVAL];

void push(double f){
    if(sp < MAXVAL){
	val[sp++] = f;
    }else{
	printf("error stacl full,can't push %g\n",f);
    }
}

double pop(void){
    if (sp > 0){
	return val[--sp];
    }else{
	printf("error stack is empty\n");
	return 0.0;
    }
} 
