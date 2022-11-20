#include<stdio.h>
void main(){
printf("RA2211042010050");
int n,a,r=0;
printf(“enter any no to get its reverse: ”);
scanf(“%d”,&n);
while(n>=1)
{
a=n%10;
r=r*10+a;
n=n/10;
}
printf(“reverse=%d”,r);
}
