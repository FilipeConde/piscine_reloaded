/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:06:06 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/12 19:07:39 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
};

void	ft_print_alphabet(void)
{
	char curr_char;

	curr_char = 'A';
	while(curr_char <= 'Z')
	{
		ft_putchar(curr_char);
		curr_char++;
	};
};

int	main()
{
	ft_print_alphabet();
};
