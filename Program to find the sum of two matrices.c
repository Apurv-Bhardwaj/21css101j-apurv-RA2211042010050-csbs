#include<stdio.h>
void main(){
printf("RA2211042010050");
int a[3][2],b[3][2],c[3][2],i,j;
printf(“Enter value for 1 matrix: ”);
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
scanf(“%d”,&a[i][j]);
}
printf(“Enter value for 2 matrix: ”);
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
scanf(“%d”,&b[i][j]);
}
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
c[i][j]=a[i][j]+b[i][j];
}
printf(“Sum of matrix is\n”);
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf(“%d\t”,c[i][j]);
}
printf(“\n”);
}
