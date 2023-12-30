/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __vprintf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:02:11 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:41:40 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

int	__vprintf(int (*out)(const char *str, int len), \
							const char *fmt, va_list args)
{
	t_opt	opt;
	int		printed;
	int		len;

	printed = 0;
	len = 0;
	while (*fmt)
	{
		if (*fmt != '%')
		{
			len++;
			fmt++;
			continue ;
		}
		printed += out(fmt - len, len);
		len = 0;
		__init_opt(&fmt, &opt);
		printed += __print_args(out, *fmt, args, &opt);
		fmt++;
	}
	printed += out(fmt - len, len);
	return (printed);
}

int	(*__get_vprintf_out_func(int fd, char *buf))(const char *str, int len)
{
	if (buf == NULL)
	{
		__set_fd(fd);
		return (__dprintf_out);
	}
	else
	{
		__set_buf(buf);
		return (__sprintf_out);
	}
}
