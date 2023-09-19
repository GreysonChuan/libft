/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:57:38 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/12 20:57:39 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigit(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count = 1;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		count ++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	res[12];
	int		count;
	int		dup;

	count = ft_countdigit(n);
	dup = (n < 0) * -1 * n + (n > 0) * n;
	res[count] = '\0';
	if (n == 0)
		return (ft_strdup("0\0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648\0"));
	while (count-- && dup)
	{
		res[count] = dup % 10 + 48;
		dup /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (ft_strdup(res));
}
