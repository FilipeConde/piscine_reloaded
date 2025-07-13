/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fconde-p <fconde-p@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:06:06 by fconde-p          #+#    #+#             */
/*   Updated: 2025/07/13 14:23:56 by fconde-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	curr_char;

	curr_char = 'a';
	while (curr_char <= 'z')
	{
		ft_putchar(curr_char);
		curr_char++;
	}
}
