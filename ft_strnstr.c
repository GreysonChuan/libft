/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:10:55 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/07 19:10:55 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	num;

	num = 0;
	if (!(*to_find))
		return ((char *)str);
	while (*str && num < len)
	{
		if (*str == *to_find)
		{
			i = 0;
			while (str[i] && to_find[i])
			{
				if (str[i] != to_find[i] || (num + i) >= len)
					break ;
				i++;
			}
			if (to_find[i] == '\0')
				return ((char *)str);
		}
		num++;
		str++;
	}
	return (NULL);
}
