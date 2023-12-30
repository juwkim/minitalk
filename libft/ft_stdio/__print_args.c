/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __print_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:17:58 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 23:04:30 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

int	__print_args(int (*out)(const char *str, int len), \
										char c, va_list args, t_opt *opt)
{
	int	printed;

	printed = 0;
	if (c == '%')
		printed += __print_c(out, '%', opt);
	else if (c == 'c')
		printed += __print_c(out, va_arg(args, int), opt);
	else if (c == 's')
		printed += __print_string(out, va_arg(args, char *), opt);
	else if (c == 'p')
		printed += __print_address(out, va_arg(args, unsigned long), opt);
	else if (c == 'x')
		printed += __print_unsigned(out, va_arg(args, unsigned), opt, 16 + 32);
	else if (c == 'X')
		printed += __print_unsigned(out, va_arg(args, unsigned), opt, 16 + 0);
	else if (c == 'u')
		printed += __print_unsigned(out, va_arg(args, unsigned), opt, 10 + 0);
	else if (c == 'd' || c == 'i')
		printed += __print_signed(out, va_arg(args, int), opt);
	return (printed);
}
