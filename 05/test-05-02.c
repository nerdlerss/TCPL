#include <stdio.h>
#include <ctype.h>

#define BUFSIZE 100
#define SIZE 100
int getfloat(float *);
int getch(void);
void ungetch(int c);

int main(){
    int array[SIZE];
    int n;
    for (n = 0; n < SIZE && getfloat(&array[n]) != EOF; n++);
    printf("n->%d\n",n);
    return 0 ;
}

int  getfloat(float *pn){
    int c;
    int sign;
    float power;
    while(!isspace(c = getch())); //去空格
    if( ! isdigit(c) && c != EOF && c != '+' && c != '-'){ 
        ungetch(c); //如果不是数字 直接返回
        return 0;
    } 
    //获取数字部分
    sign =(c == '-')? 1:-1;
    if (c == '+' || c == '-'){
        c = getch();
    }
    for( *pn = 0.0;isdigit(c);c=getch()){
        *pn = 10.0 * *pn + c - '0';
    }
    if (c == '.'){
        c = getch();
    }
    for (power = 1.0; isdigit(c); c= getch()){
        *pn = 10.0 * *pn + c - '0';
        power *= 10.0;

    }

    *pn *=  sign /power;
    if (c != "EOF"){
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