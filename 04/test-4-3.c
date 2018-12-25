#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

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
    double op2,op3;
    char s[MAXOP];
    while((type = getop(s)) != EOF){
        switch (type){
            case NUMBER:
                
                printf("push s to stack :%f\n",atof(s));
                push(atof(s));
                break;
            case '+':

                push(pop()+pop());
                break;
            case '-':
                op2 = pop();
                op3 = pop();
                printf("op2:%f  op3:%f\n",op2,op3);
                push(op3- op2);
                break;
            case '*':
                push(pop()*pop());
                break;
            case '%':
                op2 =pop();
                if (op2 != 0.0){
                    push(fmod(pop(),op2));
                }else{
                    printf("error: zero divisor\n");
                }
                //push(pop()*pop());
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
                //res = pop();
                printf("\t%.8g\n", pop());
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
        //printf("val====%s\n",val);
    }else{
        printf("error stark full cann't push : %g \n",f);
    }
}

double pop(void){
    printf ("sp*****:%d\n",sp);
    if(sp > 0){
        return (val[--sp]);
    }else{
        printf("pop error\n");
        return 0.0;
    }
}

int getop(char s[]){

    //1  - 2 
    //1  + -1.23
    //1 +  -3
    int i,c;
    while ((s[0] = c = getch()) == ' ' || c == '\t')
       //printf("c-->%d\n",c);
    ;
    s[1] = '\0';
    if(!isdigit(c) && c != '.'&& c != '-'){
        return c;
    }
    //printf("i is here %d\n",i);
        if (c == '-'){
            if (isdigit(c = getch()) || c == '.'){
                s[i++] = '-';
                s[i++] = c;
        }else{
            if (c != EOF){
                ungetch(c);
            }
            printf("return c --\n");
            return '-';
        }
    }
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
    printf ("return NUMBER");
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
