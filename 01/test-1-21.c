#include<stdio.h>
#define TABINC 8
//****aaaa***********aa******a**
int main(){
     int c;
     int pos;
     pos = 0;
     int nt = 0 ;
     int nb = 0;
     while((c = getchar()) != EOF){
         ++pos;
         if(c == ' '){
            if (pos % TABINC != 0){
                ++nb; 
            }else{
                nb = 0;
                ++nt;
            }
         }else{
             for (;nt > 0;nt--){
                putchar('*');
             }
             if( c =='\t' ){
                nb = 0; 
            }else{
                for(;nb>0;nb--){
                    putchar(' ');
                }
            }
             putchar(c);
             if (c =='\n'){
                pos = 0;
             }else if (c == '\t'){
                pos = pos +(TABINC -pos % TABINC )  -1;
             }
             //printf data
             
         }
     }
}
