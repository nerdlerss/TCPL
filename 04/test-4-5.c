#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100
#define BUFSIZE 100
#define NAME 'n'

int sp = 0;
double val[MAXVAL];
int getop(char []);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);

int main(){
    int type; 
    double op2;
    char s[MAXOP];
    while((type = getop(s)) != EOF){
        switch (type){
            case NUMBER:
                push(atof(s));
                break;
            case NAME:
                printf("to mather");
                break;
            case '+':
                push(pop()+pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '*':
                push(pop()*pop());
                break;
            case '%':
                push(pop()*pop());
                break;
            case '/':
                op2 = pop();
                if(op2 != 0.0){
                    push(pop() / op2);
                }else{
                   printf("error: zero divisor\n");
                }
                break;
            case '\n':
                pop();
                //printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }
    return 0;
}

void push(double f){
    if(sp < MAXVAL){
        val[sp++] = f;
    }else{
        printf("error stark full cann't push : %g \n",f);
    }
}

double pop(void){
    if(sp > 0){
        return (val[--sp]);
    }else{
        return 0.0;
    }
}
void mather(char s[]){
    if(strcmq(s),"sin" == 0){
        push(sin(pop()));
    }
    //some code 

}

int getop(char s[]){
    int i,c;
    while ((s[0] = c = getch()) == ' ' || c == '\t')
       //printf("c-->%d",c);
    ;
    
    s[1] = '\0';
    i = 0;
    if (islower(c)){
        while((s[++i] = c = getch())){
            ;
        }
        s[i] = '\0';
        if (c != EOF){
            ungetch(c);
        }
        if(strlen(s) > 0) {
            return NAME;
        }else{
            return c;
        }
    }
    if(!isdigit(c) && c != '.'){
        return c;
    }
    i = 0;
    if(isdigit(c)){ 
        while (isdigit(s[++i] = c = getch()))
        ;
    }
    if (c == '.'){
        while(isdigit(s[++i] = c = getch()))
        ;
    }
    s[i] = '\0';
    if(c != EOF){
        ungetch(c);
    }
    return NUMBER;
}

char buf[BUFSIZE];
int bufp = 0;

 int getch(void){
     //printf("getch==");
     return (bufp > 0 ? buf[--bufp]:getchar());
 }

 void ungetch(int c){
     if(bufp >= BUFSIZE){
         printf("ungetch : too many characters\n");
     }else{
         buf[bufp++] = c;
     }
 }
 



