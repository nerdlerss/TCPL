#include <stdio.h>
#include <string.h>

#define MAXLENS 5000 

char *lineptr[MAXLENS];

int readlines(char *lineptr[],int nlines);

void writelines(char *linepty[],int nlines);

void qsort(char *lineptr[],int left,int right);

int  main(){
    int nlines;
    if ((nlines = readlines(lineptr,MAXLENS))>= 0){
        qsort(lineptr,0,nlines-1);
        writelines(lineptr,nlines);
        return 1;
    } else {    
        printf("error:input too big to sort\n");
        return 0;

    }

}

#define MAXLEN 1000 
int getline1(char*,int);
char *alloc(int);

int readlines(char *lineptr[],int maxlines){
    int len,nlines;
    char *p,line[MAXLEN];
    nlines = 0;
    while((len = getline1(line,MAXLEN)) > 0){
        if (nlines >= maxlines || (p = alloc(len)) == NULL){
            return -1;
        } else {
            line[len - 1]= '\0';
            strcpy(p,line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;
}

