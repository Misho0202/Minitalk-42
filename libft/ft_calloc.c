/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miarzuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:46:15 by miarzuma          #+#    #+#             */
/*   Updated: 2021/07/27 16:12:52 by miarzuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	nbytes;
	void			*addr;

	nbytes = count * size;
	addr = malloc(nbytes);
	if (addr)
		ft_memset(addr, 0, nbytes);
	return (addr);
}
