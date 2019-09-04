#include<stdio.h>
#include<string.h>
#define MAXLEN 1000 
#define MAXTOP 5000
char *alloc(int);
int getlines(char *s,int lim);

int readline(char *lineptr[],char *val,int maxlines){
    int len,nlines;
    char *p = val;
    char *val = *val + MAXSTOP;

    char line[MAXLEN];
    nlines = 0;
    while((len = getlines(line,MAXLEN)) > 0)
        if(nlines >= maxlines || p+len > val ){
            return -1;
       }else{
            line[len -1] = '\0';
            strcpy(p,line);
            lineptr[nlines++] = p;
      }
      return nlines ;
}

void writelines(char *lineptr[],int nlines){
    while(nlines-- >0){
        printf("%s\n",*lineptr++);
    }
}

int getlines(char *s,int lim){
    char *t =s;
    int c;
    while(lim-- >0 && (c = getchar()) != EOF && c != '\n'){
        *s++ = c;
    }
    if (c == '\n'){
        *s++ = c;
    }
    *s = '\0';

    return *s -*t;

}
