#include<stdio.h>
#include<ctype.h> 

void itoa(char *s,int n);

int main(void){
    char s[100];
    int num = 123;
    itoa(s,num);
    printf("s===> %s\n",s);
    return 0;

}

void  itoa(char *s,int n){
    int v;
    while(n >0){
        v = n %10;
        n/=10;
        *s++ = '0' + v;
    }
   *s = '\0';
   reverse (*s);
}
