#include "stdio.h"
void ft_div_mod(int *a, int *b)
{
    int temp1;
    int temp2;
 
    temp1 = *a / *b;
    temp2 = *a % *b;
  printf("Number 1 = %d\nNumber 2 = %d\n", *a, *b);
  printf("div = %d\nmod = %d", temp1, temp2);
}
int main(void) {
   int *a;
   int *b;
   int c = 10;
   int d = 5;

   a = &c;
   b = &d;
  ft_div_mod(a, b);
  return 0;
}