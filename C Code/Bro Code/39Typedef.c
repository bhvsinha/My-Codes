#include <stdio.h>
#include<string.h>

typedef char user[30];

typedef struct {
  char name[25];
  char password[25];
  int id;
} User;

int main() {
  user array1 = "Bharat";
  printf("\n%s",array1);
  User player1 = {"Bharat","123pass",123456789};
  User player2 = {"Sinha","321pass",987654321};
  printf("\n%s",player1.name);
  printf("\n%s",player1.password);
  printf("\n%d",player1.id);
  printf("\n");
  printf("\n%s",player2.name);
  printf("\n%s",player2.password);
  printf("\n%d",player2.id);
 return 0;
}
