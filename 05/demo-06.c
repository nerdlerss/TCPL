    #include <stdio.h>
    #include <string.h>

    #define MAXLINE 1000

    int getlines(char *line,int max);

    int main(int argc,char *argv[]){
        char line[MAXLINE];
        long linemno =0;
        int c,except=0,number = 0,found = 0;
        printf("argc---%d\n",argc);
        while (--argc > 0 && (*++argv)[0] == '-'){
            while(c = *++argv[0]){
                switch(c){
                    case 'x':
                        except = 1;
                        break;
                    case 'n':
                        number = 1;
                        break;
                    default:
                        printf("find : illegal option %c\n ",c);
                        argc = 0;
                        found = -1;
                        break;
                }
            }
           
        }
        if(argc != 1 ){
            printf("Usage :find -x -n pattern\n");
        }else {
            while (getlines(line,MAXLINE) > 0 ){
                linemno ++;
                if((strstr(line,*argv) != NULL) != except){
                    if(number){
                        printf("%ld",linemno);
                    }
                    printf("%s",line);
                    found ++;
                }
            }

        }
        return found;
    }

    
    
    int getlines(char s[],int lim)        //lim ：最大行长度

    {
    int c,i;
    i=0;
    while (--lim >0 && (c = getchar())!= EOF && c != '\n')
            s[i++]=c;                   //取一行放入s中

    if (c=='\n')

        s[i++]=c;

    s[i]='\0';

    return i;      

    }   