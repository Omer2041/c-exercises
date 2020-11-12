#include <stdio.h>
#include "myMath.h"

double Exponent (int x){
double e = 2.71828;
double ans = power(e,x);
return ans;
}

double power(double x, int y){

if (y == 0){ return 1;}
return x*power(x , y-1);
}


