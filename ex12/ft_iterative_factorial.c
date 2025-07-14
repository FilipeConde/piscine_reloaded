#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 0)
	{
		return 1;
	}
	if (nb < 0)
	{
		return  0;
	}
	result = nb;
	while (nb > 1)
	{
		result *= (nb - 1);
		nb--;
	}
	return result;
}

int	main(void)
{

	int	to_print;
	to_print = ft_iterative_factorial(-3);
	printf("%d\n", to_print);
}
