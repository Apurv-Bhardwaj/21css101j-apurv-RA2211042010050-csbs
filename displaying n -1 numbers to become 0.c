#include <stdio.h>
int main()
{
int t,n,k,a[100],hash[1000],i,ans,x;
scanf("%d",&t);
while(t–)
{
scanf("%d %d",&n,&k);
for(i=0;i<1000;i++)hash[i]=0;
ans=0;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
x=(a[i]%(k+1));
hash[x]++;
if(hash[x]>n-2)ans=1;
}
if(ans)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}

