#include<stdio.h>
#include<string.h>

typedef struct {
  char name[25];
  float gpa;
}stu;

int main() {
  stu student1 = {"Spongebob", 8.0};
  stu student2 = {"Patrick", 8.40};
  stu student3 = {"Sandy", 3.10};
  stu student4 = {"Squidward", 7.90};
  stu students[] = {student1,student2,student3,student4};
  for (int i=0; i<sizeof(students)/sizeof(students[0]); i++) {
    printf("%-12s\t",students[i].name);
  } 
   printf("\n");
  for (int j=0; j<sizeof(students)/sizeof(students[0]); j++) {
    printf("%-12.3f\t",students[j].gpa);
  }

  printf("\n\n");
  for (int k=0; k<sizeof(students)/sizeof(students[0]); k++) {
    printf("%-12s\t",students[k].name);
    printf("%.3f\n",students[k].gpa);
  } 

}
