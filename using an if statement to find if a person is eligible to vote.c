#include <stdio.h>
int main() {

  int age;
  
  printf("how old are you?\n");
  scanf("%d", &age);

  if(age >= 18){
      printf("you are elgible to vote!");
  }
  if(age < 18) {
      printf("you are not eligible to vote.");
  }
} 
    
    
