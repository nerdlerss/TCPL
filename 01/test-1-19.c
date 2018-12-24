#include<stdio.h>
#define MAXLINE 10

void reverse(int row_lens,char row[]);
int getlines(char line[],int maxline);
char line[MAXLINE];
int main(){
    int len;
    int max;
    char reline[MAXLINE];
    max = 0;
    while ((len = getlines(line,MAXLINE)) >0){
        if (len > 0){
            printf("changed line --> %s \n",line);
            reverse(len,line);
            printf("nowline --> %s \n",line);
        }
    }

}

int getlines(char s[],int limit){
    int c,i;
    for(i = 0;i< limit -1 && (c = getchar()) != EOF && c != '\n';++i){
        s[i] = c;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(int row_lens,char s_line[]){
    extern char line[MAXLINE];
    printf("row_lens ---> %d\n",row_lens);
    printf("lines ----> %s\n",s_line);
    int i;
    int j = 0;
    char remo[MAXLINE];
    for ( i =0;i<= row_lens-2;i++){
        printf("row_lens--> %d --\n",row_lens - i-2);
        remo[j] = s_line[row_lens - i-2];    
        j++;
        
    }
    remo[j] = '\n';
    j++;
    remo[j]= '\0';
    printf("remo --- > %s\n",remo);
    for (i= 0; i<j;i++){
        line[i] = remo[i];
    }
}
