#include <stdio.h>
int strrubdex(char s[],char t[]);
int main(){
    char search_cr[] = "acv";
    char row_cr[] = "acv sss dasf ac sdfacvs";
                  // 01234567890123456890123
    int s = strrubdex(row_cr,search_cr);
    printf("search index = :%d",s);
    return 0;
}

int strrubdex(char s[],char t[]){
    int i,j,k;
    int flag = -1;
    for(i = 0;s[i] !='\0';i++){
        for(j=i,k=0;t[k] != '\0' && s[j] == t[k];j++,k++){
        }
        if (t[k] == '\0'){
            flag = i;
        }   
             
    }
    
    return flag;
}