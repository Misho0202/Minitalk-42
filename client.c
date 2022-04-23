/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miarzuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 19:41:17 by miarzuma          #+#    #+#             */
/*   Updated: 2021/08/14 20:27:35 by miarzuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include "libft.h"

void	send_bits(int pid, char *argv)
{
	size_t	len;
	size_t	i;
	int		shift;

	len = ft_strlen(argv);
	i = 0;
	while (i < len)
	{
		shift = 0;
		while (shift < 8)
		{
			if ((argv[i] >> shift) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			shift++;
			usleep(100);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		send_bits(pid, argv[2]);
		send_bits(pid, "\n");
	}
	else
	{
		write(1, "./client pid messege\n", 21);
		exit(0);
	}
	return (0);
}
