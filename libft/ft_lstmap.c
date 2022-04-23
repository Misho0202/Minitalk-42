/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miarzuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:52:30 by miarzuma          #+#    #+#             */
/*   Updated: 2021/07/27 16:25:44 by miarzuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*c;
	t_list	*s;

	s = ft_lstnew(f(lst->content));
	if (!(s))
		ft_lstdelone(lst, del);
	else
	{
		lst = lst->next;
		c = s;
	}
	while (lst)
	{
		c->next = ft_lstnew(f(lst->content));
		if (!(c->next))
			ft_lstdelone(lst, del);
		lst = lst->next;
		c = c->next;
	}
	return (s);
}
