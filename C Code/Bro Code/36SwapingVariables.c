#include<stdio.h>
#include<string.h>
int main() {
  char x='X' , y='Y' , temp;
  char a='A' , b='B';
  temp = x;
  x = y;
  y = temp;
  printf("%c%c",x,y);

  a=a+b;
  b=a-b;
  a=a-b;
  printf("%c%c",a,b);

  char i[15] = "water";
  char j[15] = "lemonade";
  char temp2[15];
  strcpy(temp2,i);
  strcpy(i,j);
  strcpy(j,temp2);
  printf("i = %s\n",i);
  printf("j = %s\n",j);

}
