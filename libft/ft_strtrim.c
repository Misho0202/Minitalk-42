/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miarzuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 20:28:13 by miarzuma          #+#    #+#             */
/*   Updated: 2021/07/27 16:50:49 by miarzuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	b;
	size_t	e;
	size_t	i;
	char	*s;

	if (!s1)
		return (0);
	b = 0;
	while (s1[b] != '\0' && ft_strchr(set, s1[b]))
		b++;
	e = ft_strlen(s1);
	while (e > b && ft_strchr(set, s1[e]))
		e--;
	if (b <= e)
		s = malloc(sizeof(char) * (e - b + 2));
	else
		s = malloc(sizeof(char));
	if (!s)
		return (0);
	i = 0;
	while (b <= e)
		s[i++] = s1[b++];
	s[i] = '\0';
	return (s);
}
