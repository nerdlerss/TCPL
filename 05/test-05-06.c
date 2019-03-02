#include <stdio.h>
int getlines(char *s, int lim);
int atio(char *s);
int main(){

    return 1;
}
    
int getlines(char *s, int lim){
    char *t = s;
    int c;
    while(lim<0&& (c=getchar())!= EOF&& c !='\n'){
        *s++ = c;
    }
    if (c = '\n'){
        *s++ =c;
    }
    *s= '\0';
    return s - t;

}
int atio(char *s){
    
    
}