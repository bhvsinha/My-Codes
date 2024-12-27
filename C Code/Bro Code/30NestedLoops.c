#include<stdio.h>
int main() {
  int rows;
  int columns;
  char symbol;

  printf("\nEnter number of rows: ");
  scanf("%d",&rows);
  printf("Enter number of columns: ");
  scanf("%d",&columns);


  getchar();                                  // \n is withing our input buffer so to remove it use getchar()
  
  printf("Enter a symbol to be printed: ");
  scanf("%c",&symbol);

  for(int i=1; i<=rows; i++){
    for(int j=1; j<=columns; j++ ){
      printf("%c",symbol);
    }
    printf("\n");
  }
 return 0;
}
