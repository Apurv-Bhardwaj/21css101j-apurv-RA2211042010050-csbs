#inlcude <stdio.h>
void main() {
int *p, arr[5] = {-1, -2, -3, -4, -5};
for(p = arr + 4; p >= arr; p--)
  printf("%i  %i\n", arr[p - arr], *p);
}
