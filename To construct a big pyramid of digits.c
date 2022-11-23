#include <stdio.h>
void main() {
int p,m,q,n;
  printf("Enter the number of lines : ");
  scanf("%d", &n);
  for (p = 1; p <= n; p++)
  {
    for (q = 1; q <= n-p; q++)
      printf("    ");
    m = p;
    for (q = 1; q <= p; q++)
      printf("%4d", m++);
    m = m - 2;
    for(q = 1; q < p; q++)
      printf("%4d", m++);
    printf("\n\n");
  }
  printf("\n");
}
