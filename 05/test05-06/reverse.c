#include<stdio.h>
#include<string.h>
void reverse(char *s);


int main(){
    char s[] = "my name is what?";
    reverse(s);
    printf("s==> %s\n",s);

}
void reverse(char *s){
    int c ;
    char *t;
    for (t = s + (strlen(s)-1); s < t ;s++,t--){
        c = *t;
        *t = *s;
        *s = c;
    }
    


}
