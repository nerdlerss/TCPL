#include <stdio.h>
#include <ctype.h>
double atofs(char s[]);
int main(){
     char s[] = "-160.2E-2";
    double sb = atofs(s);
    printf("sb -->%f\n",sb);
    return 0;
}

double atofs(char s[]){
    //123.45e-6
    double val,power;
    int i,sign;
    for (i=0;isspace(s[i]);i++)
    ;
    sign = (s[i] == '-') ? -1:1;
     if (s[i] == '+'||s[i]=='-'){
        i++;
    }
    for(val= 0.0; isdigit(s[i]);i++){
        val = 10.0 *val +(s[i] - '0');
    }
    if(s[i]=='.'){
        i++;
    }
    for(power=1.0;isdigit(s[i]);i++){
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    double flag;
     int ss;
    if (s[i] == 'e'|| s[i] == 'E'){
        flag = (s[i++] == '-') ?   10.0:0.1;
        printf("[%c]\n",s[i]);
        i++;
        for(ss = 0;isdigit(s[i]);i++){
            ss = 10 * ss + s[i] - '0';
        }
    }
    for(i=0;i<ss-1;i++){
        flag *= flag;
    }
    printf("[flag --- %f]",flag);
    return (sign * val /power) * flag;
}