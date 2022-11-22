#include <stdio.h>
void main(){
printf("RA2211042010050");
int A;
int B;
int C;   
printf("amount of money bid by alice bob and charlie respectively is: \n");
scanf("%d %d %d", &A, &B, &C);  
 if(A>B){
if(A>C){
printf("Alice win the prize");
}else{
printf("Charlie win the prize");
}
}else{
if(B>C){
printf("Bob win the prize");
}else{
printf("Charlie win the prize");
}
}
