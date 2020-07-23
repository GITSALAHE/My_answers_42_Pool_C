#include "stdio.h"
void ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = a / b;
  *mod = a % b;
  printf("Number 1 = %d\nNumber 2 = %d\n", a, b);
  printf("div = %d\nmod = %d", *div, *mod);
}
int main(void) {
  int a;
  int b;
  int *div_m;
  int *mod_m;
  
  a = 10;
  b = 5;
  div_m = &a;
  mod_m = &b;
  ft_div_mod(a, b, div_m, mod_m);
  return 0;
}