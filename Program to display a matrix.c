#include<stdio.h>
void main(){
printf("RA2211042010050");
int a[3][2],b[3][2],i,j;
printf(“enter value for a matrix: ”);
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
scanf(“%d”,&a[i][j]);
}
printf(“enter value for b matrix: ”);
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
scanf(“%d”,&b[i][j]);
}
printf(“\na matrix is\n\n”);
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf(“ %d ”,a[i][j]);
}
printf(“\n”);
}
printf(“\nb matrix is\n\n”);
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf(“ %d ”,b[i][j]);
}
printf(“\n”);
}
