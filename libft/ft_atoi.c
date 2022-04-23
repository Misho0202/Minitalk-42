/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miarzuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 19:46:55 by miarzuma          #+#    #+#             */
/*   Updated: 2021/01/25 19:58:43 by miarzuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long		i;
	int			convert;

	i = 0;
	convert = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			convert = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = 10 * i + *str - '0';
		str++;
	}
	return (convert * (int)i);
}
