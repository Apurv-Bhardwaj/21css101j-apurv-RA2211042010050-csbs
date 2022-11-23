#include <stdio.h>
unsigned sum20(void);
void main()
{
 printf("Program to print the sum of first 20 numbers \n");
 printf("The sum of first 20 numbers is :%u", sum20());
 }
 unsigned sum20(void)
 {
 unsigmed sum =  0;
 for (int 1 =1; i <= 20; i++)
 sum += i;
 return sum;
}
