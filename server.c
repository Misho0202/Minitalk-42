/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miarzuma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 19:24:38 by miarzuma          #+#    #+#             */
/*   Updated: 2021/08/14 20:25:01 by miarzuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include "libft.h"

void	get_bits(int sig)
{
	static int				size = 0;
	static unsigned char	msg = 0;

	size++;
	msg = msg >> 1;
	if (sig == SIGUSR2)
		msg = msg | 128;
	if (size == 8)
	{
		write(1, &msg, 1);
		size = 0;
	}
}

int	main(void)
{
	pid_t	pid;

	signal(SIGUSR2, get_bits);
	signal(SIGUSR1, get_bits);
	pid = getpid();
	ft_putstr_fd("Process ID is ", 1);
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 1);
	while (1)
		pause();
	return (0);
}
