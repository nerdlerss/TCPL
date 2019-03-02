#define NUMBER '0'
#define MAXOP 100
 void setnum(void);

int getops(char s[],char once_val[]);
int getchs(char s[]);
void ungetch(int s);
void ungets(char p[]);


void push(double);
double pop(void);