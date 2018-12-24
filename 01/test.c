#include<stdio.h>

#define IN 1
#define OUT 0

int main(){
    int c;
    int state;
    state = OUT;
    int nl,nc,nw;
    nl = nc = nw =0;
    while((c = getchar()) != EOF){
        ++nw;
        if (c == '\n'){
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }else if (state == OUT){
            ++nc;
            state =IN;
        }
    }
    printf("%d %d %d \n",nw,nl,nc);
}
