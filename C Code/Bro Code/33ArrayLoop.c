#include<stdio.h>
int main(){
  float prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

  int i = 0;
  do {
    printf("$%.2f\n",prices[i]);
    i++;
  }
  while(i<sizeof(prices)/sizeof(prices[0]));
 return 0;
}
