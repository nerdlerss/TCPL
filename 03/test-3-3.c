#include <stdio.h>
void expand(char s[],char v[]);
int main(){
    char s[]  = "-a-z--";
    //-abcde--  
    //-aaa-e--
    //-a-e--
    char v[1000];
    expand(s,v);
    printf("val -- > [%s]\n",v);
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
	int state = 0 ;
        int j = 0;
	for(i =0; s1[i] != '\0';i++){
		printf("state %d \n",state);
		if((s1[i] <='z' && s1[i] >='a') || (s1[i] <='Z' && s1[i] >='A')){
			//s[i] is word
		     switch(state){
			    case 0:
				 state = 1;
			         s2[j++] = s1[i];
				 break;
			    case 1:
				 s2[j++] = s1[i];
				 break;
			    default:
				//打印输出
				if (s1[i] <='z' && s1[i] >='a' && (s1[i] <='z' && s1[i-2] >='a'&& s1[i]> s1[i-2]){
				    int val = s[i-2];
				    while(s[i] > val){
					s[j++] = val;
					val++;
				    }
				}else if (){
				    continue;    
				}else{
				    s2[j++] = s1[i];
				    state = 1;
				    break; 
				}
			}

		}else if(s1[i] == '-'){
		    if(state == 0){
			 s2[j++] = s1[i];	
		    }else{
			    //set state 
			    s2[j++] = s1[i];
			    state = 2;
			}
		       
    		}else{
		    state = 0;
		    s2[j++] = s1[i];
		}
	}	
}

 
