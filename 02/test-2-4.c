#include <stdio.h>

void  squeeze(char s1[],char s2[]);

int main(){
    char ss1[] = "aadedasf";
    char ss2[] = "dea";
    squeeze(ss1,ss2);
    printf("----> %s\n",ss1);
    return 0;
}

void squeeze(char s1[],char s2[]){
    int i,j,k = 0;
    for(i=0;s2[i] != '\0';i++){
        //printf("--->%c\n",s1[i]);
        for(j=0;s1[j] != '\0';j++){
           //printf("--->%c\n",s1[j]);
           if(s2[i] != s1[j]){
               s1[k++] = s1[j];
           }
        }
        s1[k] = '\0';
        k =0 ;
        printf("----> %s<----\n",s1);
        
    }
    
}
 