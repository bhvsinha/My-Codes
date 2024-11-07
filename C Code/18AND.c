#include<stdio.h>
#include<stdbool.h>

int main() {
  float temp;
  bool sunny = true; 
  printf("\nenter a temperature: ");
  scanf("%f",&temp);
  
  // all conditions must be true for &&
  if(temp>=25 && temp<=30 && sunny){
    printf("\n weather is good");
  }
  else{
    printf("weather is bad");
  }
 return 0;
}
