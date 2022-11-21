#include <stdio.h>
int main(){
 printf("RA2211042010050");
int i, j, rows;
printf("Enter the number of rows: ");
scanf("%d", &rows);
for (i = 1; i <= rows; ++i) {
for (j = 1; j <= i; ++j) {
printf("* ");
}
printf("\n");
}
  return 0;
}
