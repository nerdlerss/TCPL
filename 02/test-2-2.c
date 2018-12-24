#include<stdio.h>
int main(){
    int i,c;
    int lim = 10;
    char s  [10];
    for (i=0;i<lim -1 && (c = getchar()) != '\n' && c != EOF;++i){
        s[i] = c;
    }
    printf("---%s",s);
    printf("-----------------------------------\n");
   
   

    enum loop {NO,YES};
    enum loop okloop = YES;
    i = 0;
     
    while (okloop == YES){
        if(i > lim - 1){
            okloop = NO;
        }else if ((c = getchar()) != '\n'){
            okloop = NO;
        }else if ((c = getchar()) != EOF){
            okloop = NO;
        }else{
            s[i] = c;
            ++i;
        }
    }
    return 0;
}
