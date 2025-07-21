/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:08:06 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/20 21:54:24 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_count_if(char **tab, int (*f)(char*))
{

	return f(*tab);
}

int	ft_is_a(char *s)
{
	int count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'a')
		{
			count++;
		}
		i++;
	}
	return (count);
}

int main(void)
{
	int	result;
	char	*string = "araraturere";
	char	**ptr_str = &string;

	result = ft_count_if(ptr_str, &ft_is_a);
	printf("%d", result);
}