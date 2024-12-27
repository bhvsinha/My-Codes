#include<stdio.h>
int main(){
  float prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
  printf("$%.2f\n",prices[4]);

  int marks[] = {92, 95, 37, 54, 91};
  marks[5] = 44;
  marks[6] = 31;
  marks[7] = 88;
  marks[8] = 41;
  marks[9] = 67;
  marks[10] = 99;

  for(int i=0; i<=10; i++){
    printf("%d\n",marks[i]);
  }
 return 0;
}
