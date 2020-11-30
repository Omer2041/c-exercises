#include <stdio.h>
#include "myBank.h"
double Accounts [50][2];

void openAccount(){


int i=0;
int s=901;
double o;
while (Accounts [i][0]==1) { i++;}
if (i<=50) {
printf ("Enter initial deposit:");
scanf ("%lf",&o);
Accounts [i][0]=1;
Accounts [i][1]=o;
printf ("your account number is: %d", (i+s));
}
else {
printf ("there is already 50 opened accounts");
}
}






void balanceInquiry(){
int an;
printf ("Enter Account Number: ");
scanf ("%d",&an);
if (an>900 && an<=950 && Accounts[an-901][0]==1) {
double x = Accounts [an-901][1];
printf ("Balance Inquiry of this account is: %0.2lf\n ",x);
} 
else {
printf ("there is no such account number or is closed\n");
}
}





void deposit(){
int an;
printf ("Enter Account Number:");
scanf ("%d",&an);
if (an>900 && an<=950 && Accounts[an-901][0]==1) {
double d;
printf ("Enter Deposit Amount:");
scanf ("%lf",&d);

if (d>0) {
d = Accounts [an-901][1]+d;
Accounts [an-901][1] = d;
printf ("Balance Inquiry after deposit:\n ");
printf ("%0.2lf", d);
} else {
printf ("deposit value has to be positive\n");
}
} else {
printf ("there is no such account number or is closed\n");
}
}





void withdrawl(){
int an;
printf ("Enter Account Number:");
scanf ("%d",&an);
if (an>900 && an<=950 && Accounts[an-901][0]==1) {
double d;
printf ("Enter Withdrawl Amount:");
scanf ("%lf",&d);
if (Accounts[an-901][1]>=d) {
d = Accounts [an-901][1]-d;
Accounts [an-901][1] = d;
printf ("Balance Inquiry after withdrawl: \n");
printf ("%%0.2lf", d);
} else {
printf ("this amount withdrawl is more than the account contain\n");
}
} else {
printf ("there is no such account number or is closed\n");
}
}






void closeAccount(){
int an;
printf ("Enter Account number to be closed:\n");
scanf ("%d",&an);
if (an>900 && an<=950 && Accounts[an-901][0]==1) {
Accounts [an-901][0] = 0;

} else { 
printf ("there is no such account number or is closed\n");
}
}






void interestRate(){
double w;
printf ("Enter Interest Rate:");
scanf ("%lf",&w);
if (w>0) {
int i=0;
for (i=0; i<50; i++) {
if (Accounts [i][0]==1){
double p = w/100;
double s = p * Accounts [i][1];
Accounts [i][1] = Accounts [i][1] + s;
}
}
}
}






void printAll(){
int i=0;
for (i=0; i<50; i++) {
if (Accounts [i][0]==1){
printf ("Balance inquiry in account number %d:   ",i+901);
printf ("%0.2lf \n",Accounts [i][1]);
}
}
}








void end(){
int i=0;
for (i=0; i<50; i++) {
if (Accounts [i][0]==1){
Accounts [i][0] = 0;
}
}
printf ("Thank u for using our bank \n");
}
