#include<stdio.h>
int atoi(char s[]);

int main(){

    int f = 1;
    float s = 0.1;
    float sb;
    sb = f+s;
    //printf("%f",sb);
    char line[9];
    for(int i = 0;i<10;i++){
        line[i] = '0'+i;
    }
    printf("---->%s \n",line);
    int sss = atoi(line);
    printf("---->%d\n",sss);

}
int atoi(char s[]){
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0'); 
    return n;

}