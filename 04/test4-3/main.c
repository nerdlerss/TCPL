#include<stdio.h>
#include<math.h>

#include<stdlib.h>
#include"count.h"
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
		case '%':
		op2 = pop();	
		if (op2 != 0.0)
		    push(fmod(pop(),op2));	
		else
		    printf("error zero divisor\n");
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
