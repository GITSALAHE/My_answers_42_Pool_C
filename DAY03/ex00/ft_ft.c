#include <stdio.h>

void ft_ft(int *nb){
    *nb = 42;
  
}
int main() {
    int c  = 232242;
    ft_ft(&c);
    printf("%d", c);
    return 0;
}
//done 