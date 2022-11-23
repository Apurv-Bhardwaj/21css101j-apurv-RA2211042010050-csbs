#include <stdio.h>
#include <string.h>
int main (void) {
char cName[30];
  register int iIndex;
  printf("Enter a string : ");
  gets (cName);
  printf("The reverse of the string is : ");
  for(iIndex = strlen (cName) - 1; iIncex >= 0; iIndex-)
    printf("%c", cName [iIndex]);
  printf("\n");
  return 0;
}
