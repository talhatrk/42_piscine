/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttoruk <ttoruk@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:07:42 by ttoruk            #+#    #+#             */
/*   Updated: 2023/09/10 16:44:57 by ttoruk           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	m;

	if (*b != 0)
	{
		d = *a / *b;
		m = *a % *b;
		*a = d;
		*b = m;
	}
}
