/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttoruk <ttoruk@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:26:10 by ttoruk            #+#    #+#             */
/*   Updated: 2023/09/06 20:26:56 by ttoruk           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	t;

	t = 0;
	while (t < size)
	{
		tmp = tab[t];
		tab[t] = tab [size - 1];
		tab[size - 1] = tmp;
		size--;
		t++;
	}
}
