#include <stdio.h>
int main(){
printf("RA2211042010050");
char c;
scanf("%s",&c);
if(c>='A' && c<='Z')
{
char z=c+32;
printf("Input is upper case\n");
printf("Lower case=%s",&z);
}
else if(c>='a' && c<='z')
{
char x=c-32;
printf("Input is lower case\n");
printf("Upper case=%s",&x);
}
