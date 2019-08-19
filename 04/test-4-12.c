#include<stdio.h>

void itoa(int n,char s[]);
int main(){
	
	int s = 1233;
	char se[100];
	itoa(s,se);
	printf("val : %s\n",se);

}
void itoa(int n,char s[]){
	static int num = 0;
	if (n < 0){
		n = -n;
		s[num++] = '-';
	}
	if(n > 0){
		itoa(n/10,s);
		s[num++] = n %10 + '0';
	}else{
		s[num] = '\0';
	}
	
}


