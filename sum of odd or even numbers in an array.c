include <stdio.h>
int main()
{
printf("RA2211042020050");
int n,a[10],i,s=0,s1=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
 for(i=0;i<n;i++)
{
 if(a[i]%2==0)
{
 s=s+a[i];
}
 else
{
s1=s1+a[i];
}
}
printf("even=%d",s);
printf("\nodd=%d",s1);
return 0;
}
