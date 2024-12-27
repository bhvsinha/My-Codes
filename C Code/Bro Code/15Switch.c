#include<stdio.h>
#include<ctype.h>
int main() {
  char grade;
  printf("enter your grade: \n");
  scanf("%c",&grade);
  grade = toupper(grade);
  switch(grade){
    case 'A':
      printf("outstanding\n");
      break;
    case 'B':
      printf("Good\n");
      break;
    case 'C':
      printf("okay\n");
      break;
    case 'D':
      printf("bad\n");
      break;
    case 'F':
      printf("Failed");
      break;
    default:
      printf("enter a valid grade");
    
  }
return 0;
}
