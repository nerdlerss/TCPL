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
    
    head = worker = malloc(tailline * LINES);
    tail = head + tailline * LINES;
    while ((len = getlines(line,MAXLIN))  >  0) {
        if(worker + len +1 > tail){
           worker =head;
        }
        linekey[key] = worker;
        strcpy(linekey[key],line);
        if(key+1 > LINES){
            key = 0;
        }
        key++;
        worker += len+1 ;

        nums++;
        
        printf("key %d\n line %s",key,line);
     }
   /*
   printf("num --- %d\n",nums);
   int vline = nums % LINES;
   printf("vline --- %d\n",vline);
   printf("tailline --- %d\n",tailline);
   int size = LINES;
   int first;
   if (tailline > nums){
        tailline = nums;
   }
   if (tailline > LINES){
        tailline = LINES;
   }
        
   if (vline - tailline < 0 ){
        first = vline -tailline +LINES;
   }else{
        first = vline - tailline;
   }
   printf("first ---> %d\n",first);
   printf("#####################################\n");   
   */
   int i;
   for (i =0;i<LINES;i++){
        
        printf("%d %s",i,linekey[i]);
   }
   return 0;
   int first;
   for (i = first;tailline -- >0;i=(i+1)% LINES){
        printf("%d\n",i);
        printf("%s",linekey[i]);
   }

   
}
