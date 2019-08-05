#include <stdio.h>

int main(){

    return 0;
}

void expand(char s1[],char s2[]){
	// a-z 
	// -a-z 
	// a-b-c 
	// a-z0-9
	// A-Z
	// a - Z	
		// 当状态是 x-x 这种才做操作
	int i;
	int i;
	for(i =0; s1[i] != '\0';i++){
		if((s1[i] <='z' && s1[i] >='a') || (s1[i] <='Z' && s1[i] >='A')){
			//s[i] is word
		}
	}	
}

 