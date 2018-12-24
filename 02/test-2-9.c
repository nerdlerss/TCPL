#include <stdio.h>

int main(){

    return 0 ;
} 

int bitcount(unsigned x){
    int i;
    for (i = 0; x!= 0; x&(x-1)){
        ++i;
    }

}