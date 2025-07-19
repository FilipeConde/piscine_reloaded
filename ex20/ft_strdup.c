/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:13:27 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/19 12:39:27 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		*str++;
	}
	return (i);
}
/*
char	*ft_strdup(char *src)
{
	char	*result;

	result = 

	return (result);
}
*/
#include <stdio.h>

int	main(void)
{
	char	*src = "test";
	// char	*new_str;

	// printf("%s", src);
	// printf("%s", new_str);

	printf("%d", ft_strlen(src));
}