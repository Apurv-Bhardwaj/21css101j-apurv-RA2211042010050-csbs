#include <stdio.h>
void main() 
{
 int age[20];
 int year_born[20];
 int name[20];
 
 printf("hello what is your name?\n");
 scanf("%s", name);
 
 printf("how old are you?\n");
 scanf("%d", age);
 
 if(age => 18) {
   printf("you are eligible to get a license!") 
 }
 if(age < 18) {
   printf("you are not eligiblle to vote.")
 }
}
