#include <stdio.h>
void main() {
int i = 144, j = 132;
  printf("i = %d", i);
  {
    int k = 12;
    scanf("%d", &k);
    i = i % k;
  }
  if (i == 0)
      printf("i is a divisor of %d\n", k);
  return 0;
}
