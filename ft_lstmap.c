/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchuan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:26:12 by gchuan            #+#    #+#             */
/*   Updated: 2023/09/13 21:26:12 by gchuan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*res;

	res = NULL;
	while (lst)
	{
		ptr = ft_lstnew((*f)(lst->content));
		if (!ptr)
		{
			(*del)(lst->content);
			return (NULL);
		}
		ft_lstadd_back(&res, ptr);
		lst = lst->next;
	}
	return (res);
}
