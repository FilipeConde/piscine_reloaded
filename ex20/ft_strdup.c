/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:13:27 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/19 13:45:12 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*result;

	result = (char *) malloc(ft_strlen(src) * sizeof(char));
	result = src;
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
	// char	*src = " testè";
	// char	*new_str;
	// new_str = ft_strdup(src);
	// printf("%s\n", src);
	// printf("%s\n", new_str);
// }