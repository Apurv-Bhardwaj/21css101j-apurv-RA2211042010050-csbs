#include <stdio.h>
int main(){
printf("RA2211042010050");
int n,t=0,f=0;
scanf("%d",&n);
if(n%2!=0)
{
printf("Wrong Input");
}
else
{
n=n+1;
while(n–)
{
if(n%2==0)
{
t=t+n;
}
else
{
f=f+n;
}
}
printf("Sum of all odd numbers=%d\n",f);
printf("Sum of all even numbers=%d",t);
} 
return 0;
}
