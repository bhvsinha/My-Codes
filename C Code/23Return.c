#include<stdio.h>
float square(float x){  //float becuase sq is float
  float sq = x * x;
  return sq;
}
int main(){
  float x = square(3.14159);
  printf("%f", x);

 return 0;   //int bec 0 is int
}
