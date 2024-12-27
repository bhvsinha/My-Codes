#include<stdio.h>

int main(){
  char name[255];
  printf("What is your name? ");
  fgets(name, 255, stdin);
  printf("Hello, %s\n", name);
return 0;
}