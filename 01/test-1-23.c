#include<stdio.h>
#define STATUS_LIM 2
char status_msg[STATUS_LIM];
int getstatus();
int main(){
     extern  char status_msg[STATUS_LIM];
     for (int i =0;i<STATUS_LIM;i++){
        status_msg[i] = '0';
     }
     int c;
     int state = 0;
    while((c = getchar()) != EOF){
        if(state == 3){
                putchar(c);
                continue;
        }
        if(c == '"'){
            putchar('"');
            if (state == 3){
                state = 0;
            }else{
                state =3;
            }
        }
        else if (c == '/'){
            //printf("state---> %s\n",status_msg);
          
            if (state == 0){
                state = 1;
                int s = getstatus();
                if (s == 1){
                     status_msg[0]  = '/';
                     status_msg[1]   = '0';
                }else if(s == 2){

                     status_msg[0]  = '0';
                     status_msg[1]   = '0';
                }
                
            }else{
                int s = getstatus();
                if (s == 3){
                      status_msg[0]  = '0';
                     status_msg[1]   = '0';
                }
            }
        }else if(c == '*'){
            if (state ==0){
                status_msg[0] = '*';
                status_msg[1]   = '0';
                //state = 1;
            }else if(state ==1){
                int  s = getstatus();
                if (s == 3){
                     status_msg[0]  = '0';
                     status_msg[1]   = '0';
                }
            }
            
        }else{
            //printf("state---> %s\n",status_msg);
            if (state == 1 ){ 
                state = 0;
                int s = getstatus();
                if (s == 3){
                    putchar('/');
                     status_msg[0]  = '0';
                     status_msg[1]   = '0';
                }else if(s == 2){
                    putchar('*');
                     status_msg[0]  = '0';
                     status_msg[1]   = '0';
                }
            }
            putchar(c);
        
        }        
    }
}

int getstatus(){
    int s = 0;
    if(status_msg[0] == '0' && status_msg[1] == '0'){
        // 00
        s = 1;
    }else if(status_msg[0] == '*' && status_msg[1] == '0'){
        // *0
        s = 2;
    }else if (status_msg[0] == '/' && status_msg[1] == '0'){
        // /0
        s = 3;
    }
    return s;
}