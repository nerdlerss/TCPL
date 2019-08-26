#include<stdio.h>
void strncats ( char *s,char *t,int n);
int main(void){
    char s[100] ="tom";
    char b[] = "bad guy";
    strncats(s,b,6);
    printf("s--> %s\n",s);
    return 0;

}
//strncpy strncat  strncmp

void strncats( char *s,char *t,int n){
    while(*s){
         s++;
    }
    while(*t && n-- > 0){
        *s++ = *t++;    
    }
  
}

