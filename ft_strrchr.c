/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:33:15 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/06 20:33:16 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*res;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	res = NULL;
	while (i <= len)
	{
		if (str[i] == (char)c)
			res = (char *)str + i;
		i++;
	}
	return (res);
}
