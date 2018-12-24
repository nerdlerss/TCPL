#include<ctype.h>
#include<stdio.h>
double atofs(char s[]);
int main(){
    char s[] = "-160.2";
    double ss = atofs(s);
    printf("%fl;",ss);
    return 0;
}
double atofs(char s[]){
    double val,power;
    int i,sign;
    for (i=0;isspace(s[i]);i++);
    sign = (s[i] == '-') ? -1:1;
    if (s[i] == '+'||s[i]=='-'){
        i++;
    }
    for (val=0.0;isdigit(s[i]);i++){
        val = 10.0 * val +(s[i] - '0');
    }
    if (s[i] == '.'){
        i++;
    }
    //printf("now it is %c \n",s[i]);
    for (power = 1.0;isdigit(s[i]);i++){
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    //printf("sign->%d powerval->%f,power->%f",sign,val,power);
    return sign * val /power;
}