/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 08:40:33 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/17 14:51:38 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	index_arr[argc - 1];

	i = 1;
	while (index_arr[i])
	{
		int	temp;

		temp = 0;
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = index_arr[i + 1];
			index_arr[i + 1] = index_arr[i];
			index_arr[i] = temp;
		}
		i++;
	}
	while (i < argc)
	{
		while (index_arr[i])
		{
			int	x;

			x = 0;
			while (*argv[index_arr[i]])
			{
				ft_putchar(argv[index_arr[i]][x]);
				argv[index_arr[i]]++;
			}
			i++;
			ft_putchar('\n');
		}
//		ft_putchar('\n');
		i++;
	}	
}
