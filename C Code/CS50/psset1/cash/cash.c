#include<stdio.h>
int main() {
  const double price = 0.50;
  int amount;

  printf("Price Of Candy: $%lf\n",price);
  do{
    printf("Amount paid in cents: ");
    scanf("%d", &amount);
 }while(amount < 50);
  if (amount>= 50){
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int charge = amount - 50;
    printf("Change owed: %d\n", charge);
    while(charge>=25){
      quarters++;
      charge = charge - 25;
    }
    while(charge>=10){
      dimes++;
      charge = charge - 10;

    }
    while(charge>=5){
      nickels++;
      charge = charge - 5;

    }
    while(charge>=1){
      pennies++;
      charge = charge - 1;

    }
    printf("%d\n",pennies+quarters+dimes+nickels);
  }
}