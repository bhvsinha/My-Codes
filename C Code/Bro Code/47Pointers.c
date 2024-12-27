#include<stdio.h>

void printAge(int *pAge)
{
  printf("You are %d years old\n", *pAge);
}

int main()
{
  int age;
  printf("enter your age: ");
  scanf("%d",&age);

  int *pAge = NULL;
  pAge = &age;

  printf("address of age: %p\n", &age);
  printf("value of pAge: %p\n", pAge);

  printf("size of age: %d bytes\n", sizeof(age));
  printf("size of pAge: %d bytes\n", sizeof(pAge));

  printf("value of age: %d\n", age);
  printf("value at stored address: %d\n", *pAge);
  
  printAge(pAge);
}

