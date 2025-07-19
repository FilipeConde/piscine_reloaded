/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 08:32:03 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/19 13:08:47 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <math.h>

int	ft_sqrt(int nb)
{
	int	sqroot;

	if (nb < 1)
	{
		return (0);
	}
	sqroot = 1;
	while (sqroot >= 1)
	{
		if (sqroot * sqroot == nb)
		{
			return (sqroot);
		}
		sqroot++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	n;
// 	int	result;
// 	n = 1;
// 	result = ft_sqrt(n);
// 	printf("%d\n", result);
// 	n = 0;
// 	printf("%d\n", ft_sqrt(n));
// 	n = -4;
// 	printf("%d\n", ft_sqrt(n));
// 	n = 8;
// 	printf("%d\n", ft_sqrt(n));
// 	n = 330123790096;
// 	printf("%d\n", ft_sqrt(n));
// }