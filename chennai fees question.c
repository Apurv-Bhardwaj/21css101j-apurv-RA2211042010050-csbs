#include <stdio.h>
void main(){
printf("RA2211042010050")
int passengers;
int fees;
int amt;
printf("total number of people going to chennai: \n");
scanf("%d", &passengers);
fees = passengers * 2000;
printf("thus total amount of money to be paid: %d\n", fees);
amt = 5000 - fees;
if (amt > 0) {
printf("total amount of money left: %d", amt);
}
else {
printf("total amount of money to be paid: %d", amt);
}
}
