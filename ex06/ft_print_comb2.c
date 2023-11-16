#include <unistd.h>

void	ecrit(char n)
{
	write(1, &n, 1);
}


void ecrit2(int g)
{
	int a;
	int b;

	if(g <= 9)
	{
		ecrit('0');
		ecrit(g + 48);
	}
	else
	{
		a = (g / 10);
		b = (g % 10);
		ecrit(a + 48);
		ecrit(b + 48);
	}
}



void ft_print_comb2(void)
{
	int y;
	int x;
	
	x = 0;
	while (x <= 98)
	{
		y = 0;
		while (y <= 99)
		{	
			ecrit2(x);
			ecrit(' ');
			ecrit2(y);

			if (x < 98 || y < 99)
			{	
				ecrit(',');
				ecrit(' ');
			}	
			y++;	
		}
		x++;
	}	
}


int main()
{
	ft_print_comb2();
	return (0);
}
