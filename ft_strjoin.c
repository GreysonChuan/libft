/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:22:05 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/07 20:22:06 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*str;
	int		pos;
	int		s2_start;

	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	s2_start = s1_len;
	str = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	pos = 0;
	if (!str)
		return (NULL);
	while (s1_len-- > 0)
	{
		str[pos] = s1[pos];
		pos++;
	}
	pos = 0;
	while (s2_len-- > 0)
		str[s2_start++] = s2[pos++];
	str[s2_start] = '\0';
	return (str);
}
