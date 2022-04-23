/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miarzuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 21:01:55 by miarzuma          #+#    #+#             */
/*   Updated: 2021/01/22 21:08:12 by miarzuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;

	if (dstsize == 0)
		return (ft_strlen(src));
	n = 0;
	while (dstsize > 1 && *src)
	{
		*dst = *src;
		++dst;
		++src;
		--dstsize;
		++n;
	}
	*dst = '\0';
	while (*dst || *src)
	{
		if (*src)
		{
			++src;
			++n;
		}
	}
	return (n);
}
