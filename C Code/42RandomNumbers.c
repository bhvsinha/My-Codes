#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  srand(time(0)); //current time as seed for random numbers (srand)
  int number1 = (rand() % 6) + 1;
  int number2 = (rand() % 10) + 1;
  int number3 = (rand() % 20) + 1;
  
  printf("%d\n",number1);
  printf("%d\n",number2);
  printf("%d\n",number3);
}
