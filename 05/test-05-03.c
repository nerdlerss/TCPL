#include<stdio.h>

void strcats(char *s,char *t);

int main(){
    char s[]= "Rico";
    char b[] = "is a rich man";
    strcats(s,b);
    printf("%s\n",s);
    printf("%s\n",b);
    return 1;
}

void  strcats(char *s,char *t){
    while(*s){
        s++;
   }
   while(*t){
      *s++= *t++;
   
  }

}   
