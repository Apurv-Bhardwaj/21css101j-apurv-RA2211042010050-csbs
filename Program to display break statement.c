#include<stdio.h>
void main(){
printf("RA2211042010050");
int m;
float x, sum, average;
printf(“This program computes the average of a set of computers”);
printf(“Enter values one after another”);
printf(“Enter a NEGATIVE number at the end”);
sum=0;
for(m=1;m<=1000; ++m)
{
scanf(“%f”,&x);
if(x<0)
break;
sum+=x;
}
average=sum/(float)(m-1);
printf(“\n”);
printf(“Number of values =%d”,m-1);
printf(“sum=%f”, sum);
printf(“Average=%f”, average);
}
