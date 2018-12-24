#include <stdio.h>
#define YES     1
#define NO      0
int haio(char s[]);

int main(){

    char a[] = "0x1a134d";
    printf("---->%s",a);
    int res = haio(a);
    printf("--->%d",res);
    return 0;
}

int haio(char s[]){
    int i = 0;
    int res_num = 0;
    int index = YES;
    if (s[i] == '0'){
        ++i;
        if (s[i]== 'x' || s[i]== 'X'){
                ++i;
            }

    }
    printf("^^^^^%d\n",i);
    for (;index == YES;++i){
        printf("***%d****\n",res_num);
        printf("***%c****\n",s[i]);
        if(s[i]>='0'&& s[i]<= '9'){
            res_num += s[i] - '0';
        }else if(s[i]>= 'a'&& s[i]<='f'){
            res_num +=  s[i] -'a' +10;
        }else if(s[i]>= 'A'&& s[i]<='F'){
            res_num +=  s[i] -'a' +10;
        }else{
            index = NO;
        }

    }    
    return res_num;    
}