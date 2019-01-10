#include <ctype.h>
#include <stdio.h>
#define BUFSIZE 100
#define SIZE 100
int getint(int *);

int getch(void);

void ungetch(int c);
int main(){
    int array[SIZE];
    int n;
    for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++);
    printf("n->%d\n",n);
    return 0;
}
int getint(int *pn){
    int c,sign;
    while (isspace(c = getch())); // 去掉空格
    if( ! isdigit(c) && c != EOF && c != '+' && c != '-'){ 
        ungetch(c); //如果不是数字 直接返回
        return 0;
    }  
    //set num  112
    sign = (c == '-') ? -1:1;
    if (c == '+' || c == '-'){
        c = getch();
    }
    for (*pn = 0; isdigit(c); c = getch())
    {   
        *pn = 10 * *pn + (c - '0');
        printf("*pn --- %d",*pn);
    }
    *pn *= sign;
    if (c != EOF){
        ungetch(c);
    }
    return c;
}

char buf[BUFSIZE];
int bufp = 0;
int getch(void){
    return (bufp>0 ? buf[--bufp]: getchar());   
}

void ungetch(int c){
    if (bufp > BUFSIZE){
        printf("ungetch : too many characters\n");
    }else{
        buf[++bufp] = c;
    }

}