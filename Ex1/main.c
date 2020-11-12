#include <stdio.h>
#include "myMath.h"

int main(){

double func1 (double x){


double n1= Exponent(x);
double n2 = power (x,3);
float n3 = add(n1,n2);
float ans = sub(n3,2);

return ans;
}




double func2 (double x){

double n1 = mul (x,3);
double n2 = power (x,2);
double n3 = mul (n2,2);
float ans = add (n1,n3);

return ans;

}




double func3 (double x){

double n1 = power(x,3);
double n2 = mul (n1,4);
double n3 = mul (x, -2);
double n4 = sub (5.0,n3);

double ans = div (n2,n4);

return ans;

}
double x;
printf("please enter a number:\n");
scanf("%lf",&x);
double a1 = func1(x);
double a2 = func2(x);
double a3 = func3(x);



printf("\nthe value of f1 is: %0.4lf",a1);
printf("\nthe value of f2 is: %0.4lf",a2);
printf("\nthe value of f3 is: %0.4lf \n",a3);



return 0;
}

