#include<stdio.h>
int getlines(char s,int lim);

int main(void){

    return 0;

}
int getlines(char *s, int lim){
    char *t = s;
    int c;
    while(--lim > 0 && (c = getchar()) != EOF && c != '\n'){
          *s++ = c;

    }
    if(c  == '\n'){
        *s++ = c;
    }
    *s = '\0';
    return *s - *t;


}
