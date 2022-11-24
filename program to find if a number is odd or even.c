#include <stdio.h>
int main() {
printf("RA2211042010050");
int number;
printf("Enter an integer: ");
scanf("%d", &number); 
if  (number%2 == 0) {
printf("%d is an even integer.",number);
}
else {
printf("%d is an odd integer.",number);
}
return 0;
}
