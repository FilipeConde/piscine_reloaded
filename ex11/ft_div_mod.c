/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:24:51 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/13 18:01:35 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*ptr_div;
	int	*ptr_mod;

	a = 5;
	b = 3;
	ptr_div = &div;
	ptr_mod = &mod;
	ft_div_mod(a, b, ptr_div, ptr_mod);
	printf("%d - %d\n", div, mod);
}
