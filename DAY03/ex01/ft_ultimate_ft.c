#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void ft_ultimate_ft(int *********nbr){
   *********nbr = 42;
}
int main() {
  int c;
	int *pointeur;
	int **pointeur2;
	int ***pointeur3;
	int ****pointeur4;
	int *****pointeur5;
	int ******pointeur6;
	int *******pointeur7;
	int ********pointeur8;
	int *********pointeur9;

	c = 0;
	pointeur = &c;
	pointeur2 = &pointeur;
	pointeur3 = &pointeur2;
	pointeur4 = &pointeur3;
	pointeur5 = &pointeur4;
	pointeur6 = &pointeur5;
	pointeur7 = &pointeur6;
	pointeur8 = &pointeur7;
	pointeur9 = &pointeur8;
	
	ft_putnbr(*********pointeur9);
	ft_putchar('\n');
 	ft_ultimate_ft(pointeur9);
 	ft_putnbr(*********pointeur9);
   
    return 0;
}