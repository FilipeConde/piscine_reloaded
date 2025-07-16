/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 08:32:03 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/15 21:57:35 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <math.h>
*/
int	ft_sqrt(int nb)
{
	int	curr_num;

	curr_num = nb / 2;
	while (curr_num > 1)
	{
		if (curr_num * curr_num == nb)
		{
			return (curr_num);
		}
		curr_num--;
	}
	return (0);
}
/*
int	main(void)
{
	int	n;
	int	result;
	
	n = 1;
	result = ft_sqrt(n);
	printf("%d\n", result);

	n = 8;
	printf("%d\n", ft_sqrt(n));

	n = 121;
	printf("%d\n", ft_sqrt(n));
}*/
