#include <stdio.h>
void main(){
printf("RA2211042010050");
int a;
int b;
printf("\n Swap Values: \n");
printf("\n----------------------------\n");
printf("Enter First Number  : ");
scanf("%d", &a);
printf("\nEnter Second Number : ");
scanf("%d", &b);
printf("\nNumbers Before Exchange: ");
printf("a = %d and b = %d\n", a, b);
a = a ^ b;
b = a ^ b;
a = a ^ b;
printf("\nNumbers After Exchange: ");
printf("a = %d and b = %d", a, b);
printf("\n----------------------------\n");
}
