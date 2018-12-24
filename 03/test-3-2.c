#include <stdio.h>
void espace(char s[],char t[]);

int main(){

    return 0;
}
void espace(char s[],char t[]){
    int i,j;
    for (i=j=0; t[i]!='\0';i++){
        switch (t[i]){
            case '\n':
                s[j++] ='\\';
                s[j++] = 'n';
            break;
            case '\t':
                s[j++] ='\\';
                s[j++] = 'n';
                break;
            default:
                s[j++] =t[i];
                break;
        }
    }
    s[j] = '\0';
}
void unespace(char s[],char t[]){
    int i,j;
    int state = 0;
    for (i=j=0;t[i] != '\0';i++){
        switch (t[i]){
            case '\\':
                if (state ==0){
                    state = 1;
                }
                break;
            case 'n':
                if (state ==1 ){
                    s[j++] = '\n';
                }
                break;
            case 't':
                if (state ==1 ){
                    s[j++] = '\t';
                }
                break;
            default:
                if (state == 1){
                    state = 0;
                }
                s[j++] = t[i];
                break;
        }   

        s[j] = '\0';

    }
}