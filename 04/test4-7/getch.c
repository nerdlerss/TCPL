#include <stdio.h>
#define BUFSIZE 1000
char buf[BUFSIZE];
void ungets(char s[]);
int bufp = 0;

int getch(void){

    return (bufp > 0 ? buf[--bufp]:getchar());

}

void ungetch(int c){
    if (bufp >= BUFSIZE){
	printf("error ungetch :too many characters\n");
    }else{
	buf[bufp++] = c;
    }
}

void ungets(char s[]){
	int len = strlen(s);
	while (len > 0){
		ungetch(s[--len]);
	}

}
