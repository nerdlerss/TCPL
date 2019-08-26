#include<stdio.h>
void strncpys ( char *s,char *t,int n);
int main(void){
    char s[100] ="tom";
    char b[] = "bad guy";
    strncpys(s,b,6);
    printf("s--> %s\n",s);
    return 0;

}
//strncpy strncat  strncmp

void strncpys( char *s,char *t,int n){
    while(*t && n-- >0){
       *s++ = *t++;
    }
  
}

