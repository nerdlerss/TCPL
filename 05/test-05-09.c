#include<stdio.h>

int main(){ 
   int day_of_year(int,int,int);
   void mouth_day(int,int,int *p,int *d);
   int today;
   today = day_of_year(2019,3,23);
   printf("to day : %d \n ",today);
   
   int pmouth,pday;
   mouth_day(2015,322,&pmouth,&pday);
   printf("pmouthday %d ,pday %d \n",pmouth,pday);
}    
static char daytab[2][13] = {
     {0,31,28,31,30,31,30,31,30,31,30,31},
     {0,31,29,31,30,31,30,31,30,31,30,31},
 };

int day_of_year(int year,int mouth,int day){
    // 2018 23 1
    
    int flag;
    flag = year % 4 == 0 && year%100 == 0 || year %400 == 0;
    char *s = daytab[flag];
    int i;
    *s++;

    for(i =1; i < mouth ;i++){
        day += *s++;
    }  
    return day;
} 
void mouth_day(int year,int yestday, int *pmouth ,int *pday){
    int flag;
    flag = year %4 == 0&& year %100 == 0 || year %400 == 0;
    if(year < 1){
        return ;
    }

    char *s  = daytab[flag];
    *s++;
    int i;
    for (i= 1; yestday > daytab[flag][i];i++)
        yestday -= *s++;

    *pmouth = i;
    *pday = yestday;

}
