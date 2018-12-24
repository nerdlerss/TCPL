#include <stdio.h>

int get_status();

int main(){
    int c;
    //state  1 --line  2 sork  
    int state = 1;
    while((c = getchar())!=EOF){
        if(c =='"'){
            if (state == 2){
                state = 1;
            }

        }else

    }
    return 0;
}

/*
//printf("/this is //asd")

/* printf("/**/") 
*/

*/