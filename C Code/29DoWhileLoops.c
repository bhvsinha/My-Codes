#include<stdio.h>

int main(){

  int number, sum = 0;
  do {
    printf("\nEnter number greater then 0: ");
    scanf("%d",&number); 
    if (number > 0) {
      sum += number;
    }
  }
  while(number>0);
  printf("sum = %d\n",sum);
 return 0;
}
