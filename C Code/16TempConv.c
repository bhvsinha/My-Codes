#include<stdio.h>
#include<ctype.h>
int main(){
  char unit;
  float tempc,tempf;

  printf("Is the temperature in (F) or (C)?: \n");
  scanf("%c",&unit);
  unit = toupper(unit);

  if (unit == 'C'){
    printf("enter the temp in C: \n");
    scanf("%f",&tempc);
    tempf = (tempc * 9 / 5) + 32;
    printf("the temperature in f is %f",tempf);
  }
  else if(unit == 'F'){  
    printf("enter the temperature in F: \n");
    scanf("%f",&tempf);
    tempc = ((tempf - 32) * 5 )/ 9 ;
    printf("the temperature in c is %f",tempc);
  }
  else {
    printf("enter valid unit");
  }
  return 0;
}
