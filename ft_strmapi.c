/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:14:33 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/13 19:14:34 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	count;

	count = ft_strlen(s);
	res = malloc((count + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[count] = '\0';
	while (count--)
		res[count] = (*f)(count, s[count]);
	return (res);
}
