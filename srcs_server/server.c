/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:42:42 by juwkim            #+#    #+#             */
/*   Updated: 2022/10/31 11:48:49 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf/ft_printf.h"
#include "../includes/minitalk.h"

t_context	g_prev = {0, 0, 1, 1 << CHAR_BIT};

static void	handler(int sig, siginfo_t *info, void *context)
{
	(void)context;
	if (g_prev.cur == 0)
		g_prev.cur = info->si_pid;
	if (g_prev.cur == info->si_pid)
	{
		if (sig == SIGUSR2)
			g_prev.c |= g_prev.mask;
		g_prev.mask <<= 1;
		if (g_prev.mask == g_prev.end)
		{
			if (g_prev.c == '\0')
				g_prev.cur = 0;
			else
			{
				ft_printf("%c", g_prev.c);
				kill(g_prev.cur, SIGUSR1);
			}
			g_prev.c = 0;
			g_prev.mask = 1;
		}
		else
			kill(g_prev.cur, SIGUSR1);
	}
}

int	main(void)
{
	struct sigaction	act;

	ft_printf("Starting Minitalk server...\n");
	ft_printf("Process ID: %d\n", getpid());
	ft_printf("____________________________\n");
	act.sa_sigaction = handler;
	act.sa_flags = SA_SIGINFO;
	sigemptyset(&act.sa_mask);
	sigaddset(&act.sa_mask, SIGUSR1);
	sigaddset(&act.sa_mask, SIGUSR2);
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
	return (0);
}
