/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:57:31 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:52:33 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

static char	**__buf(void);
static char	*__get_buf(void);
void		__set_buf(char *buf);

/**
 * @brief 
 * Print formatted output into a string.
 * @param buf
 * A pointer to the buffer where you want to function
 * to store the formatted string.
 * @param fmt
 * A string that specifies the format of the output.
 * @param ... 
 * @return
 * The number of characters written,
 * or a negative value if an output error occurred
 */
int	ft_sprintf(char *buf, const char *fmt, ...)
{
	va_list	args;
	int		printed;

	if (fmt == NULL)
		return (-1);
	va_start(args, fmt);
	printed = __vprintf(__get_vprintf_out_func(-1, buf), fmt, args);
	va_end(args);
	return (printed);
}

int	__sprintf_out(const char *str, int len)
{
	char		*buf;

	buf = __get_buf();
	while (*str != '\0')
		*buf++ = *str++;
	__set_buf(buf);
	return (len);
}

static char	**__buf(void)
{
	static char	*buf;

	return (&buf);
}

static char	*__get_buf(void)
{
	return (*__buf());
}

void	__set_buf(char *buf)
{
	*__buf() = buf;
}
