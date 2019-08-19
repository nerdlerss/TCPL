#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include"count.h"

void math_func(char s[]);

int main(){
    int type;
    double op2;
    char s[MAXOP];
    while((type = getops(s)) != EOF) 
    {
	switch (type){
	    case NUMBER:
		push(atof(s));
		break;	
	    case '+':
		push(pop()+pop());
		break;
	    case '*':
		push(pop()*pop());
		break;
	    case '-':
		op2 = pop();
		push(pop() - op2);
		break;
	    case '/':
		op2 = pop();	
		if (op2 != 0.0)
		    push(pop()/op2);	
		else
		    printf("error zero divisor\n");
		break;
	    case WORD:
		math_func(s);
		break;
	    case '\n':
		printf("\t%0.8g\n",pop());
		break;
	    default:
		printf("error:unknow command %s\n",s);
		break;
	}
    }
    return 0;
}

void math_func(char s[]){
	double op2;
	if (strcmp("sin",s) == 0 ){
		push(sin(pop()));
	}else if (strcmp("exp",s) == 0){
		push(exp(pop()));
	}else if (strcmp("pow",s) == 0){
	     op2 = pop();
	    push(pow(pop(),op2)); 
	}else{
	 	printf("error : %s is not defined\n",s);
	
	}

}
