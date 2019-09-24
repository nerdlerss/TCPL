#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>            
#include<string.h>
#include"tail.h"

#define  TAILLINE 10 
#define MAXLIN 100
#define LINES 10

int main(int argc,char *argv[]){
    
   printf("#####################################\n\n\n\n");   
    if (argc >  2){
        printf("Usage :find parrten \n");
       }
   printf("argc --> %d\n",argc);
   int tailline;

   argv++;
   
   char s[100];
   char line[MAXLIN];
   int len;
   
   char *head;
   char *worker;
   char *tail;
   char *linekey[LINES];
   int key = 0; 
   int nums = 0;

   if(argc == 2  && (*argv[0]) == '-'){
         printf("%s\n",*argv);
         int i = 1; 
         int j = 0;
         while(i < 3){
            s[j++] = (*argv)[i++];
         }

        s[j] =  '\0';
    }
    if(atof(s) > 0 ){
        tailline = atof(s);
    }else{
        tailline = TAILLINE;
    }
    
    head = worker = malloc(MAXLIN * LINES);
    tail = head +MAXLIN * LINES;
    while ((len = getlines(line,MAXLIN))  >  0) {
        if(worker + len +1 > tail){
           worker =head;
        }
        linekey[key] = worker;
        strcpy(linekey[key],line);
        
        printf("key --> %d,line-->%s",key,linekey[key]);
        if(key+1 > LINES){
            key = 0;
        }
        worker += len+1 ;
        nums++;
        key++;
               
    }
   int vline = nums % LINES;

   int first=0;
   if(tailline > nums){
           tailline = nums;
   }
   if(vline - tailline <0){
         first = LINES + vline -tailline;
   }else{
         first = vline - tailline;
   }

   printf("\n\n####################################");
   printf("first ---> %d\n",first);
   int i = 0;
   for (i = first;tailline-->0;i = (i + 1) % LINES){
        printf("%d %s",i,linekey[i]);
   }
   return 0;
   
}
