/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 08:43:25 by juwkim            #+#    #+#             */
/*   Updated: 2022/10/31 11:37:29 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_socket
{
	pid_t	s_pid;
	char	*msg;
}	t_socket;

typedef struct s_context
{
	pid_t		cur;
	char		c;
	int			mask;
	int			end;
}	t_context;
#endif
