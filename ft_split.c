/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:03:10 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/08 20:03:11 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (*s && !c)
		return (1);
	while (c && *s == c)
		s++;
	if (*s)
		count = 1;
	while (*s++)
	{
		if (*s == c && *(s + 1) && *(s + 1) != c)
			count ++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	next;
	size_t	count;
	size_t	i;

	i = 0;
	count = ft_countword(s, c);
	res = (char **)malloc((count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res[count] = 0;
	while (i < count && *s)
	{
		while (*s && *s == c)
			s++;
		next = 1;
		while (*(s + next) && *(s + next) != c)
			next++;
		res[i] = ft_substr(s, 0, next);
		s += next;
		i++;
	}
	return (res);
}
