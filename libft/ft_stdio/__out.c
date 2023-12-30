/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __out.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 06:31:19 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 22:54:01 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

int	__print_c(int (*out)(const char *str, int len), char c, t_opt *opt)
{
	int	printed;

	printed = 0;
	if (opt->left == 0)
		while (opt->width-- > 1)
			printed += out(" ", 1);
	printed += out(&c, 1);
	while (opt->width-- > 1)
		printed += out(" ", 1);
	return (printed);
}

int	__print_string(int (*out)(const char *str, int len), \
									const char *s, t_opt *opt)
{
	int	len;
	int	printed;

	printed = 0;
	if (s == NULL)
		s = "(null)";
	len = ft_strlen(s);
	if (opt->dot && len > opt->prec)
		len = opt->prec;
	if (opt->left == 0)
		while (len < opt->width--)
			printed += out(" ", 1);
	printed += out(s, len);
	while (len < opt->width--)
		printed += out(" ", 1);
	return (printed);
}

int	__print_address(int (*out)(const char *str, int len), \
										unsigned long num, t_opt *opt)
{
	int			printed;
	char		buf[16];
	const int	len = ft_itoa(buf, num, 16, 32);

	printed = 0;
	opt->width -= 2 + len;
	if (opt->left == 0)
		while (opt->width-- > 0)
			printed += out(" ", 1);
	printed += out("0x", 2) + out(buf, len);
	while (opt->width-- > 0)
		printed += out(" ", 1);
	return (printed);
}

int	__print_unsigned(int (*out)(const char *str, int len), \
									unsigned long num, t_opt *opt, int flag)
{
	char		i;
	int			printed;
	char		b[32];
	const int	len = ft_itoa(b, num, 10 + 6 * (flag > 10), 32 * (flag > 16));

	printed = 0;
	opt->width -= (num && opt->special) << 1;
	opt->width -= ft_max(len, opt->prec) * (num || opt->dot == 0 || opt->prec);
	if (opt->left == 0 && (opt->dot || opt->zeropad == 0))
		while (opt->width-- > 0)
			printed += out(" ", 1);
	i = 'X' | (32 * (flag > 16));
	if (num && opt->special)
		printed += out("0", 1) + out(&i, 1);
	if (opt->left == 0)
		while (opt->width-- > 0)
			printed += out(&opt->zeropad_char, 1);
	i = ft_max(len, opt->prec);
	while (len < i--)
		printed += out("0", 1);
	if (num || opt->dot == 0 || opt->prec)
		printed += out(b, len);
	while (opt->width-- > 0)
		printed += out(" ", 1);
	return (printed);
}

int	__print_signed(int (*out)(const char *str, int len), long num, t_opt *opt)
{
	int		i;
	int		len;
	int		printed;
	char	buf[32];

	printed = 0;
	__set_sign(&num, opt);
	len = ft_itoa(buf, num, 10, 0);
	opt->width -= ft_max(len, opt->prec) * (num || opt->dot == 0 || opt->prec);
	if (opt->left == 0 && (opt->dot || opt->zeropad == 0))
		while (opt->width-- > 0)
			printed += out(" ", 1);
	if (opt->sign_char)
		printed += out(&opt->sign_char, 1);
	if (opt->left == 0)
		while (opt->width-- > 0)
			printed += out(&opt->zeropad_char, 1);
	i = ft_max(len, opt->prec);
	while (len < i--)
		printed += out("0", 1);
	if (num || opt->dot == 0 || opt->prec)
		printed += out(buf, len);
	while (opt->width-- > 0)
		printed += out(" ", 1);
	return (printed);
}
