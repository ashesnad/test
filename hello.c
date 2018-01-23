#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  printf("Hello, World!\n");
  printf("sin(pi/2) = %.6f\n", sinf(M_PI/2.f));
  printf("sin(pi/3) = %.6f\n", sinf(M_PI/3.f));
  printf("sin(pi/4) = %.6f\n", sinf(M_PI/4.f));
  printf("sin(pi/5) = %.6f\n", sinf(M_PI/5.f));
  printf("sin(pi/6) = %.6f\n", sinf(M_PI/6.f));
  return 0;
}
