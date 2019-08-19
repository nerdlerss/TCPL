#include<stdio.h>
#include<string.h>


void reverse(int len,char s[]);
int main(){
    char val[] = "thing";
    reverse(strlen(val)-1,val);
    printf("val === > %s.\n",val);

}

void reverse(int len,char s[]){
    static int head = 0;
    printf("head %d  len %d \n",head,len);
    if((len - head)/2 > 1){
        int temp;
        temp = s[head];
        s[head] = s[len];
        s[len] = temp;
        head ++;
        reverse(len-1,s);
    }

}
