#include<stdio.h>
int main(){
  int H;
  do {
    printf("Height: ");
    scanf("%d", &H);
  } while(H<1 || H>8);
  if(H>=1 && H<=8){
    for(int i=0; i<H; i++){
      for(int j=0; j<H-i-1; j++){
        printf(" ");
      }
      for(int k=0; k<=i; k++){
        printf("#");
      }
      printf("  ");
      for(int a=0; a<=i; a++){
        printf("#");
      }
      printf("\n");
      }
    }

}
