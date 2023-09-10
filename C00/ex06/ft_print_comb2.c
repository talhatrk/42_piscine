/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttoruk <ttoruk@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:51:08 by ttoruk            #+#    #+#             */
/*   Updated: 2023/09/03 01:31:27 by ttoruk           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar ((a / 10) + 48);
			ft_putchar ((a % 10) + 48);
			ft_putchar (' ');
			ft_putchar ((b / 10) + 48);
			ft_putchar ((b % 10) + 48);
			if (a != 98)
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			b++;
		}
		a++;
	}
}
