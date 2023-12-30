/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:17:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:49:38 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

/**
 * @brief 
 * Write formatted output to stdout,
 * under control of the format specifier.
 * @param fmt
 * A string that specifies the format of the output.
 * @param ... 
 * @return
 * The number of characters written,
 * or a negative value if an output error occurred
 */
int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		printed;

	if (fmt == NULL)
		return (-1);
	va_start(args, fmt);
	printed = __vprintf(__get_vprintf_out_func(STDOUT_FILENO, NULL), fmt, args);
	va_end(args);
	return (printed);
}
