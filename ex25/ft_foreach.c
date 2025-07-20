/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 19:42:20 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/20 20:03:06 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// #include <unistd.h>
// int ft_putchar(char c)
// {
// 	write(1, &c, 1);
// 	return (0);
// }
// void	ft_putnbr(int nbr)
// {
// 	if (nbr < 0)
// 	{
// 		ft_putchar('-');
// 		ft_putnbr(-nbr);
// 	}
// 	else if (nbr > 9)
// 	{
// 		ft_putnbr(nbr / 10);
// 		ft_putnbr(nbr % 10);
// 		ft_putchar('\n');
// 	}
// 	else
// 	{
// 		ft_putchar(nbr + '0');
// 	}
// }
// int	main(void)
// {
// 	int	tab[] = {25, -4, 3, -32, 1};
// 	ft_foreach(tab, 5, &ft_putnbr);
// }