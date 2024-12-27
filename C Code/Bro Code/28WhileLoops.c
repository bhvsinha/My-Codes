#include<stdio.h>
#include<string.h>
int main(){
  char name[25];
  printf("\nEnter your name: ");
  fgets(name, 25, stdin);
  name[strlen(name)-1] = '\0';

  while (strlen(name)==0){
    printf("you did not enter your name");
    printf("\nEnter your name: ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';
  }
  printf("Hello %s",name);
 return 0;
}
