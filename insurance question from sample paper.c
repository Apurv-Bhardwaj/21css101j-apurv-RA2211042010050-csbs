#include <stdio.h>
void main(){
int X;
int Y;
printf("maximum rebated amount for any damage by the insurance company:\n");
scanf("%d", &X);
printf("amount required to repair the car: \n");
scanf("%d", &Y);
if (Y <= X) {
printf("The amount will be rebated by the insurance company = %d", Y);
}
else {
printf("The amount will not be rebated by the insurance company");
}
}
