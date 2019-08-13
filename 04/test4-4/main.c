#include<stdio.h>

#include<stdlib.h>
#include"count.h"
int main(){
    int type;
    double op2;
    double op1;
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
	    case '\n':
		printf("\t%0.8g\n",pop());
		break;
	    case 'p':
		//Printf stack top elements
		op2 = pop();
		printf("stack head ---> %g \n",op2);
		push(op2);
		break;
	    case 'c':
		//Copy stack top elements
		op2 = pop();
		push(op2);
		push(op2);
		break;
	    case 'e':
		//Exchange stack top elements
		op1 =  pop();
		op2 = pop();
		push(op1);
		push(op2);
		break;
	    case 'C':
		//Clear stack top elements 
		clear_stack();

	    default:
		printf("error:unknow command %s\n",s);
		break;
	}
    }
    return 0;
}
