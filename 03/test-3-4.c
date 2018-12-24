#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverse(char s[]);
void itoa(int n,char s[]);

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
    int i,sign;
    printf("n-->%d",n);
    printf("s-->%s\n",s);

    sign = 0;
    i = 0;
    do {
        s[i++] = abs( n%10 ) +'0';
        printf("i=[%d] n = [%d] msg = [%c]\n",i,n,abs( n%10 ) +'0');
    }while((n/=10)!= 0);
    if (sign == 0){
        s[i++] = '-';

    }
    s[i] = '\0';
    reverse(s);

}