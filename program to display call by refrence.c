#include<stdio.h>
void main(){
printf("RA2211042010050");
int a,b,*aa,*bb,swap();
a=5;
b=10;
aa=&a;
bb=&b;
printf(“value of a= %d & value of b=%d before swap”,a,b);
swap(aa,bb);
printf(“\nvalue of a=%d & b=%d after swap”,a,b);
getch();
}
int swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
