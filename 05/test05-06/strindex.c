#include<stdio.h>
#include<string.h>

int strindex(char *s,char *t);

int main(){
    char s[] = "my name is what?";
    char b[] =  "name";
    int var = strindex(s,b);
    printf("var ===> %d\n",var);

}
int strindex(char *s,char *t){
    char *ps = s;
    char *p;
    char *u;
    while(*s++ != '\0'){
        for(p = s,u=t; *u != '\0' && *p ==  *u ; p++,u++)
        ;
        if(*u == '\0' &&  u>t ){
            return s - ps;
        }

    }
    return -1;

}

