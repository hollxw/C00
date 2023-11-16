#include <unistd.h>

void ft_is_negative(int n)
{
	char x;
	char y;
	x = 'N';
	y = 'P';
	if (n > 0)
	{
		write (1, &y,1);
	}
	if (n < 0)
	{
		write (1, &x,1);
	}
}

int main ()
{
	ft_is_negative(20);
	return (0);
}
