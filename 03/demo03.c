#include <stdio.h>
#include <ctype.h>
#include <string.h>

void itoa(int n,char s[]);
int atoi(char s[]);
void reverse(char s[]);
int main(){
    int s = -123;
    char n[10];
    itoa(s,n);
    printf("[%s]",n);
    return 0;
}
void reverse(char s[]){
    int c,i,j;
    // j is len for char s[];
    for( i=0,j=strlen(s)-1;i<j;i++,j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa(int n,char s[]){
    printf("n==%d",n);
    printf("s==%s\n",s);
    int i,sign;
    if ((sign =n)<0)
        n = -n;
    i = 0;
    do{
        //printf("[i==>%d,n==>%d]",i,n);
        s[i++] = n%10 + '0';
    }while ((n /= 10)>0);
    if (sign < 0 ){
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}