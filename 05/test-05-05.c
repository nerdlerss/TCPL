#include<stdio.h>
void strncpy ( char *s,char *t,int n);
void strncar(char *s,char *t,int n );
void  strncmp(char *s,char *t ,int n);
int main(void){

    return 1;
}
//strncpy strncat  strncmp

void strncpy ( char *s,char *t,int n){
    while(*s && n-- > 0){
        *s++ = *t++;
    }
    while(n-- > 0){
        *s++ = '\0';
    }   
}

void strncat(char *s,char *t,int n){
   
}
void strncmq(char *s,char *t,int n){

}