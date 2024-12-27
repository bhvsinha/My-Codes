#include<stdio.h>
#include<stdbool.h>
int main() {
  char a = 'C';                                        // single character %c 
  char b[] = "bharat";                                 // array of character %s 
  printf("%c %s \n",a,b);

  float c1 = 3.141592;                                 // 4 bytes (32bits of precision ) 6-7 digits %f 
  printf("%f\n",c1);
  float c2 = 3.141592653589793;
  printf("%0.15f\n",c2);                               // overflow and 0.15 shows 15 digits after decimal 
  double d = 3.141592653589793;                        // 8 bytes (64 bits of precision) 15-16 digits %lf
  printf("%0.15lf\n",d);

  bool e1 = true;                                      // 1 byte (true=1 or false=2) %d 
  bool e2 = false;                                     
  printf("%d\t%d\n",e1,e2);
  
  char f1 = 119;                                       // 1 byte (-128 to +127) %d or %c 
  printf("%d\t%c\n",f1,f1);                              
  char f2 = 128;
  printf("%d\t%c\n",f2,f2);                            // overflow
  unsigned char g1 = 254;                              // 1 byte (0 to 255) %d or %c 
  printf("%d\t%c\n",g1,g1);
  unsigned char g2 = 259;
  printf("%d\t%c\n",g2,g2);                            // overflow 

  short int h1 = 32767;                                // 2 bytes (-32768 to 32767) %d 
  printf("%d\n",h1);
  short int h2 = 32768;                                 
  printf("%d\n",h2);
  unsigned short int i1 = 65535;                       // 2 bytes (0 to 65535) %d  
  printf("%d\n",i1);
  unsigned short int i2 = 65539;                         
  printf("%d\n",i2);                                   // overflow
  int j1 = 2147483647;                                 // 4 bytes (-2147483648 to 2147483647) %d 
  printf("%d\n",j1);
  int j2 = 2147483648;                                 
  printf("%d\n",j2);                                   // overflow
  unsigned int k1 = 4294967295;                        // 4 bytes (0 to 4294967295) %u 
  printf("%u\n",k1);
  unsigned int k2 = 4294967297;                        
  printf("%u\n",k2);                                   // overflow
  long long int l1 = 9223372036854775807;              // 8 bytes (-9 quintillion to +9 quintillion ) %lld
  printf("%lld\n",l1);
  long long int l2 = 9223372036854775808;              
  printf("%lld\n",l2);                                 //overflow
  unsigned long long int m1 = 18446744073709551615U;   // 8 bytes (0 to 18 quintillion) %llu
  printf("%llu\n",m1);
  unsigned long long int m2 = 18446744073709551617U;   
  printf("%llu\n",m2);                                 // overflow

return 0;
}

