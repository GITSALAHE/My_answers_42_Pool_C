#include <stdlib.h>
void ft_putchar(char c){
    write(1, &c, 1);
}
void ft_print_reverse_alphabet(void){
    char c = 'z';
    
    while (c >= 'a')
    {
        ft_putchar(c);
        c--;
    }
}
int main() {
    ft_print_reverse_alphabet();
    return 0;
}
