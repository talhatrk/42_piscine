/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttoruk <ttoruk@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:44:19 by ttoruk            #+#    #+#             */
/*   Updated: 2023/09/13 12:44:23 by ttoruk           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
