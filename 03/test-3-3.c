#include <stdio.h>
void expand(char s[],char v[]);

 
int main(){
    char s[]  = "-a-z--";
    //-abcde--  
    //-aaa-e--
    //-a-e--
    char v[1000];
    expand(s,v);
    printf("val ---> [%s]\n",v);
    return 0;
}

void expand(char s1[],char s2[]){
    // a-z     
	// -a-z 
	// a-b-c 
	// a-z0-9
	// A-Z
	// a - Z	
    char s;
    int i,j = 0;
    while((s = s1[i++] )!= '\0'){
        if (s1[i] == '-' && s1[i+1]>= s){
            while (s < s1[i+1]){
                s2[j++] = s++;
            }
            i++;
        }else{
            s2[j++] = s1[i];
        }
    } 
    s2[j] = '\0';
}
 
