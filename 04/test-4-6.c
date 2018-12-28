#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100
#define BUFSIZE 100

int sp = 0;
double val[MAXVAL];
int getop(char []);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);

int main(){
    int type; 
    double op2,msg;
    char s[MAXOP];
    double keys[26];
    double s1[MAXVAL] ;
    int val;
    for (int i =0 ;i<26;i++){
        keys[i] = 0.0;

    }
    // 2 A = 
    // 2 A +
    while((type = getop(s)) != EOF){
        switch (type){
            case NUMBER:
                push(atof(s));
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
            case '=':
                 pop();
                 if (type >= 'A' && type <= 'Z'){
                     keys[type - 'A'] = pop();
                 }else{
                     printf("no key in keys");
                 }
                break;
            case '\n':
                msg = pop();
                printf("\t%.8g\n", msg);
                break;
            default:
                if(type >= 'A' && type <= 'Z'){
                    push(keys[type - 'A']);
                 }else if (type == 'v'){
                     push(msg);
                 }else {
                     printf("error: unknown command %s\n", s);
                 }
                
                break;
        }
        val= type;

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

int getop(char s[]){
    int i,c;
    while ((s[0] = c = getch()) == ' ' || c == '\t')
       //printf("c-->%d",c);
    ;
     
    s[1] = '\0';
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
     return (bufp > 0 ? buf[--bufp]:getchar());
 }

 void ungetch(int c){
     if(bufp >= BUFSIZE){
         printf("ungetch : too many characters\n");
     }else{
         buf[bufp++] = c;
     }
 }
