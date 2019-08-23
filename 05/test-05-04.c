#include<stdio.h>

int strend(char *s,char *t);

int main(){
    char s[]= "Rico";
    char b[] = "co";
    /*
        adsfas
        as
        sre
    */
    int val = strend(s,b);
    printf("==>%d",val);
    return 1;
}

int  strend(char *s,char *t){
    char *ps = s;
    char *pt = t;
    while(*s++);
    while(*t++);
    for(;*s == *t;s--,t--){
        if(s == ps || t == pt){
            break;
        }
    }
    if(*s == *t && %s != '\0 && t = pt){
        return 1;
    }else {
        return 0;
    }

}
