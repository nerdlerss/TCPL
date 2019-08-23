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
    int *s = &n;
    getint(s);
    printf("val == > %d.\n",n);
    return 0;
}
int getint(int *pn){
    int c,sign,d;
    while (isspace(c = getch()));
    if( ! isdigit(c) && c != EOF && c != '+' && c != '-'){ 
        ungetch(c);
        return 0;
    }   
    //set num  112
    sign = (c == '-') ? -1:1;
    if (c == '+' || c == '-'){
        d = c ;
        if(! isdigit(c = getch())){
            if ( c !=EOF){
                ungetch(c);
            }
            ungetch(d);
            return d;
        }
        c = getch();
    }

    for (*pn = 0; isdigit(c); c = getch()){   
       *pn = 10 * *pn + (c - '0');
       printf("pn === > %d.",*pn);
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
