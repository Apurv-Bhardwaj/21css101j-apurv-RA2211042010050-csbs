#include <stdio.h>
int main(){
printf("RA2211042010050");
int a[100],i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[j]==a[i])
{
printf("%d ",a[i]);
}
}
}
return 0;
}
