/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:43:39 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 14:23:32 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

# include <stdbool.h>
# include <assert.h>

enum
{
	alnum = 1 << 0,
	punct = 1 << 1,
	cntrl = 1 << 2,
	blank = 1 << 3,
	graph = 1 << 4,
	print = 1 << 5,
	space = 1 << 6,
	xdigit = 1 << 7,
	digit = 1 << 8,
	alpha = 1 << 9,
	lower = 1 << 10,
	upper = 1 << 11
};

unsigned char	__toascii(char c);
unsigned short	__ctype_table(unsigned char c);

bool			ft_isascii(char c);
bool			ft_isalnum(char c);
bool			ft_ispunct(char c);
bool			ft_iscntrl(char c);
bool			ft_isblank(char c);
bool			ft_isgraph(char c);
bool			ft_isprint(char c);
bool			ft_isspace(char c);
bool			ft_isxdigit(char c);
bool			ft_isdigit(char c);
bool			ft_isalpha(char c);
bool			ft_islower(char c);
bool			ft_isupper(char c);

char			ft_toupper(char c);
char			ft_tolower(char c);

#endif // FT_CTYPE_H
