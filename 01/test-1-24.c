#include <stdio.h>
#define MAXLINE 3
int msg_num[MAXLINE];
char msg_state[MAXLINE];  
char context[MAXLINE];
void state_machine(int msg);
int state = 0;

int main(){
    extern  int msg_num[MAXLINE];
    extern  char msg_state[MAXLINE];
    extern int state ;
    int c ;
     
    while((c = getchar()) != EOF){
      
        printf("--state--->%d\n",state);
        state_machine(c);
        putchar(c);
        
    }
    return 0;
}
//state_machine；
/*
0---普通字符
1--触发模式
2--单行注释模式
3--多行注释模式
*/ 

void state_machine(int msg){
    extern int state;
    switch(msg){
        case '/':
            if(state == 0){
                state = 1;
            }else if(state == 1){
                state  = 2;
            }else if (state == 4){
                state = 0;
            }
            break;
        case '"':
            if(state == 0){
                state = 2;
            }else if(state == 2){
                state = 0;
            }
            break;
        case '*':
            if(state == 1){
                state = 3;
            }else if (state == 3){
                state = 4;
            }
        case '\n':
            //printf ("state****%d\n",state);
           if( state != 3 && state != 4){
                state = 0;
            }
            break;
        default:
            if(state != 2 && state != 3 && state != 4){
                state = 0;
            }
            if (state == 4){
                state = 3;
            }
            break;
    }
}


 