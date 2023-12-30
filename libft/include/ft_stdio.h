/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:18:12 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 20:22:38 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <unistd.h>
# include <stdarg.h>

# include "libft.h"

# define BUFSIZE	16384

typedef struct s_opt
{
	int		width;
	int		prec;
	char	zeropad_char;
	char	sign_char;
	char	zeropad	: 1;
	char	plus	: 1;
	char	space	: 1;
	char	left	: 1;
	char	special	: 1;
	char	dot		: 1;
}	t_opt;

/* ft_printf.c */
int		ft_printf(const char *format, ...);

/* ft_dprintf.c */
int		ft_dprintf(int fd, const char *fmt, ...);
void	__set_fd(int fd);
int		__dprintf_out(const char *str, int len);

/* ft_sprintf.c */
int		ft_sprintf(char *buf, const char *fmt, ...);
void	__set_buf(char *buf);
int		__sprintf_out(const char *str, int len);

/* ft_get_next_line.c */
char	*ft_get_next_line(int fd);

/* vprintf.c */
int		__vprintf(int (*out)(const char *str, int len), \
							const char *fmt, va_list args);
int		(*__get_vprintf_out_func(int fd, char *buf))(const char *str, int len);

/* utils.c */
int		__skip_atoi(const char **s);

/* set_option.c */
void	__set_flags(const char **fmt, t_opt *opt);
int		__get_width(const char **fmt);
void	__set_prec(const char **fmt, t_opt *opt);
void	__init_opt(const char **fmt, t_opt *opt);
void	__set_sign(long *num, t_opt *opt);

/* print_args */
int		__print_args(int (*out)(const char *str, int len), \
										char c, va_list args, t_opt *opt);

/* out.c */
int		__print_c(int (*out)(const char *str, int len), char c, t_opt *opt);
int		__print_string(int (*out)(const char *str, int len), \
									const char *s, t_opt *opt);
int		__print_address(int (*out)(const char *str, int len), \
									unsigned long num, t_opt *opt);
int		__print_unsigned(int (*out)(const char *str, int len), \
									unsigned long num, t_opt *opt, int flag);
int		__print_signed(int (*out)(const char *str, int len), \
									long num, t_opt *opt);

#endif // FT_PRINTF_H
