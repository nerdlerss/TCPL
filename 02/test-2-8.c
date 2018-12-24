#include <stdio.h>
unsigned rightrot(unsigned x,int n);
int get_wordlength(void);
int main(){
    unsigned r = rightrot(5,3);
    printf("---->%d",r);
}

unsigned rightrot(unsigned x,int n){
    unsigned word_length = get_wordlength();
    return ((x^0)<<(word_length - n)) ^ x >> n;
   
}

int get_wordlength(){
    unsigned word = ~0;
    int flag = 1;
    int inter = 1;
    while(flag){
        word = word >>1;
        if (word > 0){
            inter ++;
        }else{
            flag = 0;
        }
    }

    return inter;

}