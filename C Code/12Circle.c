#include <stdio.h>
#include <math.h>

int main(){
 
  double radius;
  double circumference;
  double area; 

  printf("\nenter the radius of circle: ");
  scanf("%lf", &radius);
  
  circumference = 2 * M_PI * radius;
  area = M_PI * radius * radius;
  
  printf("circumference: %lf\narea: %lf",circumference,area);
 return 0;
  
}


