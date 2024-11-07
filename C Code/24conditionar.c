#include<stdio.h>

int findmax(int a, int b){
/*
  if(a>b){
  return a;
  }
  else{
    return b;
  }
*/ 
return (a>b) ? a : b;
}

int main(){
  int a,b;
  printf("\nenter value of a and b: ");
  scanf("%d\t%d",&a,&b);
  int max = findmax(a,b);
  printf("the maximum is %d\n", max);
 return 0;
}
