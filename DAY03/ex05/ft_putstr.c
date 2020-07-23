#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}


void	ft_putstr(char *str)
{
	int j;

	j = -1;
	while (str[++j] != '\0')
	{
		ft_putchar(str[j]);
        
	}
}

int main(){
  ft_putstr("GITSALAH");
  
  return (0);
}