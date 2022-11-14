#include <stdio.h>
int main() 
{
    //typecasting a method to convert int variables to float and other on between the code
    //here we will be calculating the amount of profit (dollars) that a bakery generates on its bagels on a dialy basis
    float avgprofit;
    int bagelssold = 45;
    int daysworked = 20;
    int price = 23;
    
    avgprofit = (float) price * (float) bagelssold / (float) daysworked; //here the variables are converted to float for a more accurate response
    printf("The daily profit on bagels is: $%.2f", avgprofit);
       
} 
    regisration number: RA2211042010050
    
