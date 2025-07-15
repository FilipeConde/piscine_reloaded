/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 08:32:03 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/15 08:57:56 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	curr_num;

	curr_num = nb / 2;
	while (curr_num > 1)
	{
		if (curr_num * curr_num == nb)
		{
			return curr_num;
		}
		curr_num--;
	}
}

int	main(void)
{
	int	result;

	result = ft_sqrt(9);
	printf("%d", result);
}
