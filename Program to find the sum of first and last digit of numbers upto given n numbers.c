#include <stdio.h>
int main(){
printf("RA2211042010050");
int n,fd,ld,sum=0;
scanf("%d",&n);
ld=n%10;
fd=n;
while(n>=10)
{
n=n/10;
}
fd=n;
sum=fd+ld;
printf("%d",sum);
return 0;
}
