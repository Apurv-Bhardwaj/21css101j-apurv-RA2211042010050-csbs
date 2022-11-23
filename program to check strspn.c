#include <stdio.h>
#include <string.h>
int main (void)
{
char  *string1 = "0123456789";
  char *string2 = "A32DC014";
  int length;
  length = strspn (string1, string2);
  printf("Number of characters at the beginning of string1\n"
         "which are ther ein string2=%d\n", length);
  return 0;
}
