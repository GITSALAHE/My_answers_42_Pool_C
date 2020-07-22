#include <stdlib.h>
void ft_putchar(char c){
    write(1, &c, 1);
}
void ft_is_negative(int n){
   if(n < 0){
       char negatif = 'N';
       ft_putchar(negatif);
   }
   if(n >= 0){
       char positif = 'P';
       ft_putchar(positif);
   }
}
int main() {
    ft_is_negative(-1);
    return 0;
}
