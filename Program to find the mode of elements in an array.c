#include <stdio.h>
int main(){
printf("RA2211042010050");
int a[100],i,j,n,flag=0;
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
flag=1;
printf("Mode=%d ",a[i]);
}
}
}
if(flag==0)
printf("none");
return 0;
}
