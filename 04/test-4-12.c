#include <math.h>
int main(){
    return 0;
}

void itoa(int s,char str[]){
    //12313
    static int i;
    if (s /10){
        itoa(s/10,s);
    }else{
        if (s < 0){
            str[i++] = '-';
        }
    }
    str[i++]  = abs(s) + '0';
    str[i] = '\0';

}