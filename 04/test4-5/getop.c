#include<ctype.h>
#include<string.h>
#include<stdio.h>
#include "count.h"

int getops(char s[]){

    int i,c;
    while ((s[0] = c = getch()) == ' ' || c == '\t')
    ; 
    s[1] = '\0';
    if(! isdigit(c) && c != '.'){return c;}
    i = 0;
    if(islower(c)){
	while (islower(s[++i] = c = getch()))
	;
	s[i] = '\0';
	if (c != EOF){
	    ungetch(c);
	}

	if(strlen(s) > 1 ){
	    return WORD;
	}else{
	    return c;
	}
    }
    if(isdigit(c))
	while(isdigit(s[++i] = c = getch()))
	    ;
    if(c == '.')
	while(isdigit(s[++i] = c = getch()))
	    ; 
    s[i] = '\0';
    if (c != EOF){ungetch(c);}
    return NUMBER; 
}
