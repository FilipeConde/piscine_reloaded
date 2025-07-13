/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:29:48 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/13 14:31:52 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	curr_char;

	curr_char = '0';
	while (curr_char <= '9')
	{
		ft_putchar(curr_char);
		curr_char++;
	}
}
