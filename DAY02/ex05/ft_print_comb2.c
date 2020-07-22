#include <stdlib.h>
void ft_putchar(int c){
    write(1, &c, 1);
}
void  ft_print_comb(void){
    int num1;
    int num2;

    num1 = -1;
    while (++num1 <= 99)
    {
       num2 = num1;
       while (++num2 <= 99)
       {
        ft_putchar((num1 / 10) + '0');
			ft_putchar((num1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((num2 / 10) + '0');
			ft_putchar((num2 % 10) + '0');
			if (num1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
       }
       
    }
    
}
int main(){
    ft_print_comb();
    return 0;
}