#include<stdio.h>


int main() {
  char operator;
  float a, b, out;
  printf("enter the operator +,-,* or / : \n");
  scanf("%c",&operator);

  printf("enter first value: ");
  scanf("%f",&a);

  printf("enter second value: ");
  scanf("%f",&b);
  
  switch(operator){
    case '+':
      out = a + b;
      printf("\nsum is %.2f",out);
      break;
    case '-':
      out = a - b;
      printf("\ndifference is %.2f",out);
      break;
    case '*':
      out = a * b;
      printf("\nmultiply is %.2f",out);
      break;
    case '/':
      out = a / (float) b;
      printf("\ndivide is %.2f",out);
      break;
    default:
      printf("\nenter a valid operator");
  }
 return 0;
}
