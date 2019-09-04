#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXLENS 5000

char *lineptr[MAXLENS];
int readline(char *lineptr[],int nlines);
void writelines(char *lineptr[],int nlines);
void qsorts( char *lineprt[],int left,int right);

int main(){
    int nlines;
    if((nlines = readline(lineptr,MAXLENS)) >= 0){
        qsorts(lineptr,0,nlines-1);
        writelines(lineptr,nlines);
        return 0;
    }else{
        printf("error : input too big to sort\n");
        return 1;
        }
}

