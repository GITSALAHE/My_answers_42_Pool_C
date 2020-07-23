#include <unistd.h>
#include <stdio.h>


int	ft_strlen(char *str)
{
	int j;

	j = -1;
	while (str[++j] && str)
	if (j == -1)
      j = 0;
  return (j);
       
}

int main(void){
  printf("Number of chars is %d", ft_strlen("Hello i am GITSALAH"));
  return (0);
}