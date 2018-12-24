#include<stdio.h>

int main(){
    char res = "cb0";
    char se[3];
    se[0] = 'c';
    se[1] = 'b';
    se[2] = '0';
    int i =0;
    printf("%s",se);
    if (se == res){
        printf("******");
    }
    printf("%d",se[2]);
}
