#include<stdio.h>
int main() {
 int age;
 char name[25];
 char namewithspace[25];

  printf("what is your first name?: \n");
  scanf("%s",&name);
  getchar();                                             // getchar() is used because fgets cant read input if its after scanf
  printf("your first name is %s\n", name);

  printf("\nwhat is your full name?: \n");
  fgets(namewithspace,25,stdin);
  printf("your full name is %s\n",namewithspace);

  printf("how old are you: \n");
  scanf("%d", &age);
  printf("you are %d years old",age);
return 0;
}
