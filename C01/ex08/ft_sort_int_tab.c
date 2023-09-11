/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttoruk <ttoruk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:09:49 by ttoruk            #+#    #+#             */
/*   Updated: 2023/09/11 12:10:31 by ttoruk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	t;
	int	c;

	c = 0;
	while (c <= size)
	{
		t = 1;
		while (t < size)
		{
			if (tab[t - 1] > tab[t])
			{
				tmp = tab [t - 1];
				tab [t - 1] = tab[t];
				tab [t] = tmp;
			}
			t++;
		}
		c++;
	}
}
