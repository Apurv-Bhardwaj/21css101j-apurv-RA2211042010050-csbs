#include <stdio.h>
void main() {
int iarray[5] = {1,2,3,4,5};
  int i, *ptr;
  ptr = &iarray[0];
  for (i = 0; i<5; i++)
  {
    printf("%u - %d\n", ptr, *ptr);
    ptr++;
  }
}
