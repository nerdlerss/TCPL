#include <stdio.h>
#include "calc.h"

int sp =0;
double val[MAXOP];
void push(double op){
    printf("OP === > %f \n",op);
    if (sp<MAXOP){
        val[sp++] = op;
    }else{
        printf("stark val is full...\n");
    }

}
double pop(void){
    if (sp >0 ){
        return val[--sp];
    }else{
        printf("error stack empty \n");
        return 0.0;
    }
}