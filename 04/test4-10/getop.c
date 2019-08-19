#include<ctype.h>
#include<stdio.h>

#include "count.h"

int getops(char s[]){

    int i,c;
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
    if (c != EOF){ungetch(c);}
    return NUMBER; 
}
int  li = 0;
char line(MAXLINE);
int getops(char s[]){
    	//get data 
	if(line[n] != '\0'){
	    if(getline(line,MAXLINE) == 0){
		return EOF;
	    }else {
		li = 0;
	   }
	}		
	int i,c;
	while((s[0] = c = line[li++] == ' ' || c == '\t')
	;
	s[1] = '\0';
	if (!isdigit(c) && c != '.'}{return c;}
	i = 0;
	if(isdigit(c))
	    while(isdigit(s[i++] = c = line[li++] )) 
	    ;
	if(c == '.')
	    while(isdigit(s[i++] = c = line[li++]))
    	    ;
	if s[i] = '\0';
	li--;
	return NUMBER;	

}
