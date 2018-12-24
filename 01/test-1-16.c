#include <stdio.h>
#define MAXLINE 10

int getlines(char s[],int maxlines);
void copy(char to[],char from[]);



int main(){
    int len;
    int max;
    char line[MAXLINE];
    char logset[MAXLINE];

    max = 0;
    while(( len = getlines(line,MAXLINE)) > 0 ){
        printf("len:%d --> %s\n",len,line);
        if (len > max){
            max =len;
            copy(logset,line);
        }    
    }
    if (max >0 ){
        printf("max:::%s",logset);
    }
    return 0 ;

}

int getlines(char s[],int limit){
    int c ,i,j;
    j = 0;
    for (i=0; (c = getchar()) != EOF && c !='\n';++i){
         s[i] = c;
         ++j;
    }
    if (c == '\n'){
        s[i] = '\0';
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}
void copy(char to[],char from[]){
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0'){
        ++i;
    }

}
