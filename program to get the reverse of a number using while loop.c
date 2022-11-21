#include <stdio.h>
int main(){
printf("RA2211042010050");
int n,rn=0,rem;
scanf("%d",&n);
while(n!=0)  
{
rem=n%10;
rn=rn*10+rem;
n/=10;
}
printf("%d",rn);
return 0;
}
