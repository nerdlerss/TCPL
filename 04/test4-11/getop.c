#include<ctype.h>
#include<stdio.h>

#include "count.h"

int getops(char s[]){

    static int val = 0 ;
    int i,c;
    if(val == 0){
	c = getch();
    }else{
	c = val;
	val = 0;
    
   }  
    while ((s[0] = c = getch()) == ' ' || c == '\t')
    ; 
    s[1] = '\0';
    if(! isdigit(c) && c != '.'){return c;}
    i = 0;
    if(isdigit(c))
	while(isdigit(s[++i] = c = getch()))
	    ;
    if(c == '.')
	while(isdigit(s[++i] = c = getch()))
	    ; 
    s[i] = '\0';

    if (c != EOF){
	   val = c;
   	}
    return NUMBER; 
}
