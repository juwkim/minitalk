/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __set_option.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 06:12:51 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 22:27:40 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"

void	__set_flags(const char **fmt, t_opt *opt)
{
	while (1)
	{
		(*fmt)++;
		if (**fmt == '-')
			opt->left = 1;
		else if (**fmt == '+')
			opt->plus = 1;
		else if (**fmt == ' ')
			opt->space = 1;
		else if (**fmt == '#')
			opt->special = 1;
		else if (**fmt == '0')
		{
			opt->zeropad = 1;
			opt->zeropad_char = '0';
		}
		else
			return ;
	}
}

int	__get_width(const char **fmt)
{
	return (__skip_atoi(fmt));
}

void	__set_prec(const char **fmt, t_opt *opt)
{
	opt->prec = 0;
	opt->dot = 0;
	if (**fmt == '.')
	{
		(*fmt)++;
		opt->dot = 1;
		opt->prec = __skip_atoi(fmt);
	}
}

void	__init_opt(const char **fmt, t_opt *opt)
{
	opt->zeropad = 0;
	opt->zeropad_char = ' ';
	opt->plus = 0;
	opt->space = 0;
	opt->left = 0;
	opt->special = 0;
	__set_flags(fmt, opt);
	opt->width = __get_width(fmt);
	__set_prec(fmt, opt);
}

void	__set_sign(long *num, t_opt *opt)
{
	opt->sign_char = 0;
	if (*num < 0)
	{
		opt->sign_char = '-';
		*num *= -1;
		opt->width--;
	}
	else if (opt->plus)
	{
		opt->sign_char = '+';
		opt->width--;
	}
	else if (opt->space)
	{
		opt->sign_char = ' ';
		opt->width--;
	}
}
