#include <stdio.h>
int main()
{
  printf("RA2211042010050");
  int num,a[100],sum=0,i;
  scanf("%d",&num);
  for(i=0;i<num;i++)
    scanf("%d",&a[i]);
  for(i=0;i<num;i++)
  {
    if(a[i]>=0)
      {
        sum=sum+a[i];
      }
  }
  printf("sum=%d",sum);
  return 0;
}
