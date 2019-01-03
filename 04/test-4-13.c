
int main(){

    return 0;
}

void reverse(char s[]){
    void reverser(char s[], int i,int len);
    reverser(s,0,strlen(s));
}

void reverser(char s[], int i,int len){
    //abcde
    //edabc
    //edcab
    //edcba
    int c,j;
    j = len - i;
    if (i < j){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
        reverser(s,++i,len);
    }

    
}