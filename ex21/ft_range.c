/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:10:53 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/20 11:26:48 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	qty;
	int	*int_arr;

	j = 0;
	qty = max - min;
	int_arr = (int *) malloc (qty * sizeof(int));
	if (min >= max)
	{
		return ((void *)0);
	}
	i = min;
	while (i < max)
	{
		int_arr[j] = i;
		i++;
		j++;
	}
	return (int_arr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	*arr_ptr;
// 	int	i;
	//
// 	i = 10;
// 	arr_ptr = ft_range(-5, 5); 
	//
// 	if (arr_ptr == NULL)
// 	{
//         printf("NULL Pointer Passed");
//         // return;
//     }
// 	else
// 	{
// 		printf("Non-Null Pointer Passed");
// 	}
// 	while (*arr_ptr < i)
// 	{
// 		printf(" %d |", *arr_ptr);
// 		arr_ptr++;
// 	}
// 	}
