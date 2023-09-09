/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:12:28 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/07 21:12:29 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ptr;
	int		to_trim;

	i = 0;
	ptr = (char *)malloc(50 * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[i] != '\0')
	{
		to_trim = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				to_trim = 1;
			j++;
		}
		if (!to_trim)
			ptr[ft_strlen(ptr)] = s1[i];
		i++;
	}
	return (ptr);
}
