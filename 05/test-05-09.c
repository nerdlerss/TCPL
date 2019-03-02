 
static char daytab[2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

int day_to_year(int year,int month, int day){
    int leap;
    char *p;
    leap = year%4 == 0 && year%100 != 0 ||  year%400 == 0;
    p = daytab[leap];
    while(--month){
        day += *++p;
    }
    return day;
}
int month_day(int yearday,int year,int *smonth,int *sday){
    int leap;
    leap = year%4 == 0 && year%100 != 0 ||  year%400 == 0;
    char *p;
    p = daytab[leap];
    while(yearday > *++p){
        yearday -= *p;
    }
    *smonth = p -*(daytab -leap);
    *sday = yearday;
}