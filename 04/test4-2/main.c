#include<stdio.h>
double atofaa(char s []);
int main(){
    char s[] = "12.344e2";
    double res = 0.0;
    res = atofaa(s);
    printf("res -- > %f\n",res);
    return 0;
}
