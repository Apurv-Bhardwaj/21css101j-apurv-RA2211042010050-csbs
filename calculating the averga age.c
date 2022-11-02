#include <stdio.h>
void main() {
    float age1, age2, age3, average;
    age1 = age2 = 5.0;
    
    printf("what is your current age?\n");
    scanf("%f", &age3);
    
    average = (age1 + age2 + age3) / 3;
    printf("\n The average age of the group of people %f", average);
    
}
