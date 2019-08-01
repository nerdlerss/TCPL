#include<stdio.h>
int lower(int c);
int main(){
	int a = 'A';
	int b = lower(a);
	printf("%c",b);
	return 0;
}

int lower(int c){

	return (c>='A' && c <= 'Z' ? c = c + 'a' - 'A':c);
}
