#include<stdio.h>
void main(){
printf("RA2211042010050");
int a,b,c;
printf(“enter value of a, b & c: ”);
scanf(“%d%d%d”,&a,&b,&c);
if((a>b)&&(a>c))
printf(“a is greatest”);
if((b>c)&&(b>a))
printf(“b is greatest”);
if((c>a)&&(c>b))
printf(“c is greatest”);
}
