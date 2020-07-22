#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_swap(int *a, int *b){
    int swap; 

    swap = *a;
    *a = *b;
    *b = swap;

}

int main() {
    int a = 8;
  int b = 10;
  int swap;
    
  int *aptr = &a;
  int *bptr = &b;

  ft_swap(aptr, bptr);

  printf("value of 'A' is %d\n", a);
  printf("value of 'B' is %d\n", b);
    return 0;
}

