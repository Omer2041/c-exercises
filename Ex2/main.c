#include <stdio.h>
#include "myBank.h"

int main() {
char type;
while(type != 'E'){
printf ("\n Please choose a transaction type: \n O-Open Account \n B-Balance Inquiry \n D-Deposit \n W-Withdrawal \n C-Close Account \n I-Interest \n P-Print \n E-Exit \n ");
scanf ("%s",&type);

if (type == 'O') {
openAccount();
} else if (type == 'B') {
balanceInquiry();
} else if (type == 'D') {
deposit();
} else if (type == 'W') {
withdrawl();
} else if (type == 'C') {
closeAccount();
} else if (type == 'I') { 
interestRate();
} else if (type == 'P') { 
printAll();
} else if (type == 'E') { 
end();
}else {
printf("it is not a valid transaction!");
}
}
}
