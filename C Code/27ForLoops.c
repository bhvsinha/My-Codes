#include<stdio.h>
int count(int n) {
  for(int i=1; i<=n; i++) {
      printf("\n%d",i);
      }
}
int main(){
int n;
  printf("\nenter the number to count upto: ");
  scanf("%d",&n);
  count(n);
  return 0;
}
