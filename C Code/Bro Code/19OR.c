#include<stdio.h>
#include<stdbool.h>

int main(){
  float temp;

  printf("\nenter temperature: ");
  scanf("%f",&temp);
  // OR operator || checks if either one statement is true   
  if(temp<25 || temp>30){
    printf("\nweather is bad");
  }
  else{
    printf("\nweather is good");
  }
 return 0;
}
