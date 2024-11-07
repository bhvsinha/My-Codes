#include<stdio.h>
#include<stdbool.h>
int main(){
  bool sunny = true;
  // NOT operator ! reverses the condition
  if(!sunny){ 
  printf("\nits sunny outside");
  }
  else{
    printf("\nits cloudy outside");
  }
 return 0;
}
