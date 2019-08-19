#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include"count.h"
int main(){
    int type,i,val;
    double op2,p;
    p = 0.0;
    char s[MAXOP];
    double vals[26];
	 
    for (i=0;i<26;i++){
	vals[i] = 0.0;
    }
	    
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
	    case '=':
		// A = 13  ==> 13  A =
		pop(); // del A ;
		if(val <= 'Z' && val >='A'){
			vals[val - 'A'] = pop();
			push(vals[val-'A']);
		}else{
			printf("error: val is error\n");
	        }

		break;
	    case '\n':
		p = pop();
		printf("\t%0.8g\n",p);
		break;
	    default:
		if(type >= 'A' && type <= 'Z'){
			printf("push val %f \n",vals[type-'A']);
			push(vals[type - 'A']);
		
		}else if(type = 'p'){
			push(p);
		}else {
			printf("error:unknow command %s\n",s);
		}
		break;
	}
	val  = type;
    }
    return 0;
}
