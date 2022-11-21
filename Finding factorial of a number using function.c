#include<stdio.h>
void main(){
printf("RA2211042010050");
int a,f;
int fact(int);
printf(“enter a no: ”);
scanf(“%d”,&a);
f=fact(a);
printf(“factorial= %d”,f);
getch();
}
int fact(int x)
{
int fac=1,i;
for(i=x;i>=1;i--)
fac=fac*i;
return(fac);
}
