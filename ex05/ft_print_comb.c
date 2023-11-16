#include <unistd.h>

void	triple(char X)
{
	write(1, &X, 1);
}

void ft_print_comb(void)
{
	int x;
	int y;
	int z;
	
	x = '0'; 
	y = x + 1;
	z = y + 1;

	while (z <= '9')	
	{
		triple(x);
		triple(y);
		triple(z);

		if (x < '7')
		{
		triple(' ');
		triple(',');
		}
				
		z++;

		if (z > '9')
		{	
			y = y + 1;
			z = y + 1;
		}
		
		if (y >= '9')
		{
			x = x + 1;
			y = x + 1;
			z = y + 1;
		}	
	}
}


int main()
{
	ft_print_comb();
	return (0);
}
