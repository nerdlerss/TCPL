#include <stdio.h>
int main(){
    int c;
    int flag  = 0;
    while( (c = getchar()) !=EOF ){
        if (c  == ' '){
            if (flag == 0){
                putchar(c);
            }
            flag = 1;
        }else{
            flag = 0;
        }
        if (flag == 0){
            putchar(c);    
        }
    }
}
