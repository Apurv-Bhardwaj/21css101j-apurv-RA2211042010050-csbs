#include <stdio.h>
void find_bmi();
int main(){
printf("RA2211042010050");
find_bmi();   
}
void find_bmi() {
int weight;
float height;
printf("\n BMI: \n");
printf("\n----------------------------\n");
printf("Enter height (in m): ");
scanf("%f", &height);
printf("Enter weight (in kg): ");
scanf("%d", &weight);
printf("your bmi is: %f", weight / (height * height));
printf("\n----------------------------\n");
}
