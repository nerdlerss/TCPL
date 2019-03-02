#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int getlines(char *line,int max);

int main(int argc,char *argv[]){
    char line[MAXLINE];
    int found = 0;
    if (argc != 2){
        printf("Usage : find pattern \n");
    }else{
        while (getlines(line,MAXLINE) > 0){
            if(strstr(line,argv[1]) != NULL){
                printf("%s",line);
                found ++;
            }
        }
    }
    return found;
}

 
 
int getlines(char s[],int lim)        //lim ：最大行长度

  {

   int c,i;

   i=0;

   while (--lim >0 && (c = getchar())!= EOF && c != '\n')

     s[i++]=c;                   //取一行放入s中

   if (c=='\n')

      s[i++]=c;

   s[i]='\0';

  return i;      

 }   