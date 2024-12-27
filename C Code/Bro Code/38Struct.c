#include<stdio.h>
#include<string.h>

struct Player {
  char name[25];
  int score;
};

int main() {
  struct Player player1;
  struct Player player2;

  strcpy(player1.name,"Bharat");
  strcpy(player2.name,"Daksh");
  player1.score = 10;
  player2.score = 8;

  printf("\nplayer 1 name: %s",player1.name);
  printf("\nplayer 1 score: %d",player1.score);
  printf("\nplayer 2 name: %s",player2.name);
  printf("\nplayer 2 score: %d",player2.score);
}
