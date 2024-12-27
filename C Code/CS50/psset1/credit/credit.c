#include<stdio.h>
void checksum(long long int cn){
  long long int x = cn;
  int total = 0,mod1,mod2,d1,d2,sum1=0,sum2=0;
  do
  {
    mod1 = x % 10;
    x /=  10;
    sum1 +=  mod1;
    mod2 = x % 10;
    x /= 10;
    mod2 *= 2;
    d1 = mod2 % 10;
    d2 = mod2 / 10;
    sum2 = sum2 + d1 + d2;
  }
  while (x > 0);
  total = sum1 + sum2;
  if (total % 10 == 0)
  {
    printf("VALID\n");
  }
  else{
    printf("INVALID\n");
  }


}

int main(){
  long long int cn,temp,first,second;
  int size=0;

  printf("Number: ");
  scanf("%lld", &cn);

  temp = cn;
  while(temp != 0){
    temp /= 10;
    size++;
  }

  first = cn;
  while(first >= 10){
    first /= 10;
  }

  second = cn;
  while(second >= 100){
    second /= 10;
  }
  second = second % 10;
  if((size == 13 || size == 15 || size == 16)){
  if(size == 15){
    if(first == 3){
      if(second == 4 || second == 7){
        printf("AMEX\n");
        checksum(cn);
      }
    }
  }
  if(size == 13){
    if(first == 4){
      printf("VISA\n");
      checksum(cn);
    }
  }
  if(size == 16){
    if(first == 5){
      if(second == 1 || second == 2 || second == 3 || second == 4 || second == 5){
        printf("MASTERCARD\n");
        checksum(cn);
      }
    }
  }
  }
  else{
    printf("INVALID\n");
  }

}
