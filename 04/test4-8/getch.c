#include <stdio.h>
#define BUFSIZE 1000

int bufp = 0;

int getch(void){

    if(bufp !=0){
	return bufp;
	bufp = 0;
   }else{
	int c ;
	c = getchar();
	return c ;
 }

}

 /*
  int c ;
 if (bufp != 0){
	c = bufp;
	bufp = 0;
	}else{
	c = getchar();	
 	}
	return c;
 
 */

void ungetch(int c){
	if(bufp != 0){
		printf("error ungetch :too many characters\n");
	}else{
		bufp = c;
	}
}
