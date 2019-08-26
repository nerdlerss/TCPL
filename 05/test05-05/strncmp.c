#include<stdio.h>
int strncmps( char *s,char *t,int n);
int main(void){
    char s[100] ="tom";
    char b[] = "bad guy";
    strncmps(s,b,6);
    printf("s--> %s\n",s);
    return 0;

}
//strncpy strncat  strncmp
int  strncmps( char *s,char *t,int n){
    for(;*s == *t;s++,t++){
        if(*s == '\0' && n >=0){
           return 0;
        }
    }
    return *s - *t;
    
}

