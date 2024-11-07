#include<stdio.h>

int main() {
  int age;

  printf("enter your age: ");
  scanf("%d",&age);
  if (age>=18) {
    printf("adult\n");
  }
  else if(age<0){
    printf("invalid");
  }
  else if(age == 0){
    printf("enter value bigger then 0");
  }
  else {
    printf("minor\n");
  }
 return 0;

}
