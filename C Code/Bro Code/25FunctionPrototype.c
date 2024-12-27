#include<stdio.h>

void hello(char[] , int);
int main(){
  int age;
  char name[25];

  printf("enter your name: ");
  scanf("%s",&name);
  printf("enter your age: ");
  scanf("%d",&age);

  hello(name,age);
}

void hello(char name[], int age){
  printf("\nhello %s",name);
  printf("\nyou are %d years old",age);
}
