#include<stdio.h>

double atofaa(char s[]){
    printf("this is here \n");
    double val,power;
    int i,sign;
    for (i = 0;isspace(s[i]);i++)
	;
    sign = (s[i] == '-')?-1 :1;
    if(s[i] == '+' || s[i] == '-'){i++;}
    for (val = 0.0; isdigit(s[i]);i++){
	val  = 10.0 * val + s[i] - '0';
	
    }
    if (s[i] == '.'){i++;}
    
    for (power = 1.0;isdigit(s[i]);i++){
	val = 10.0 * val + s[i] - '0';
	power *= 10.0;
	
    }
    
    double ksign = 1.0;
    if (s[i]  == 'e' || s[i] == 'E'){
    i++;
    ksign = (s[i] == '-')? 0.1:10.0;
    
    if (s[i] == '-'){i++;};
    int j;
    
    for(j=1;j<s[i] - '0' ;j++){
	 printf("ksgin %f \n",ksign);
	ksign  *= ksign;
    }
    }

    printf("end of the ksgin %f \n",ksign);
    printf("sign %d,  val %f,power %f\n",sign,val,power);
    return val * sign /power * ksign;

}
