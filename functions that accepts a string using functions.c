#include <stdio.h>
#include<string.h>
int main(){
printf("RA2211042010050");
char str[15],ch,cat[10];
scanf("%s%s",str,cat);
scanf("%s",&ch);
int i=0,j,len;
len=strlen(str);
for(i=0;i<len;i++)
{
if(str[i]==ch)
{
for(j=i;j<len;j++)
{
str[j]=str[j+1];
}
len–;
i–;
}
}
printf("%s ",str);
printf("%s",cat);
return 0;
}
