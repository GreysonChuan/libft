/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 21:16:58 by gchuan            #+#    #+#             */
/*   Updated: 2023/06/29 13:42:05 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	whitespace(const char *str, int *pos)
{
	int	i;
	int	sign;
	int	count;

	i = 0;
	sign = 1;
	count = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
		count++;
	}
	*pos = i;
	if (count > 1)
		return (0);
	return (sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	sign = whitespace(str, &i);
	res = 0;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	res *= sign;
	return (res);
}
