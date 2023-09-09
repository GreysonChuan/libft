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

#include <stddef.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*res;

	res = NULL;
	while (*str++ != '\0')
	{
		if (*str == c)
			res = (char *)str;
	}
	return (res);
}