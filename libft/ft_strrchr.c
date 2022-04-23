/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miarzuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 20:31:55 by miarzuma          #+#    #+#             */
/*   Updated: 2021/07/27 16:50:04 by miarzuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = (char *)(s);
	i = ft_strlen(ptr);
	while (i >= 0)
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		--i;
	}
	return (0);
}
