#include <stdio.h>
int main(){
printf("RA2211042010050");
int a,i,l,s;
scanf("%d",&a);
int b[a];
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
l=b[0];
for(i=1;i<a;i++)
{
if(l<b[i])
{
l=b[i];
}
}
s=b[0];
for(i=0;i<a;i++)
{
if(s>b[i])
s=b[i];
}
printf("%d",l);
printf("\n%d",s);
return 0;
}
