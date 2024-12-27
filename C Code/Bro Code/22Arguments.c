#include<stdio.h>
void hbd(char name[25],int age){   // this reads the passed parameter
  printf("\nHappy birthday dear %s",name);
  printf("\nyou are now %d years old",age);
}
int main(){
  char name[25];
  int age;
  printf("\nenter your name: ");
  scanf("%s",&name);
  printf("\nenter your age: ");
  scanf("%d",&age);

  hbd(name,age);           // this passes the arguments to hbd()
 return 0;
}
