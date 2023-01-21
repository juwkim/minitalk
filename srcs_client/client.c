/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:42:47 by juwkim            #+#    #+#             */
/*   Updated: 2022/10/31 11:54:19 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"
#include "../includes/minitalk.h"

t_socket	g_ipc;

static void	handler(int signum)
{
	static int	mask = 1;
	const int	end = 1 << CHAR_BIT;

	usleep(50);
	if (*g_ipc.msg & mask)
		signum = SIGUSR2;
	mask <<= 1;
	if (mask == end)
	{
		if (*g_ipc.msg == '\0')
		{
			kill(g_ipc.s_pid, signum);
			ft_printf("client [%d] end...\n", getpid());
			exit(0);
		}
		mask = 1;
		g_ipc.msg++;
	}
	kill(g_ipc.s_pid, signum);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		ft_printf("usage: client [server_pid] [message]");
		return (1);
	}
	g_ipc.s_pid = ft_atoi(argv[1]);
	g_ipc.msg = argv[2];
	ft_printf("client [%d] start...\n", getpid());
	signal(SIGUSR1, handler);
	handler(SIGUSR1);
	while (1)
		pause();
	return (0);
}
