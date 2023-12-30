/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:47:14 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 18:17:21 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static int	__count_words(char const *s, char c);

/**
 * @brief 
 * Split string with delimiter into an array of strings.
 * @param s 
 * @param delim 
 * @return Return an array of splited strings.
 */
char	**ft_split(const char *s, const char delim)
{
	int				idx;
	const char		*begin;
	char **const	buf = (char **const) \
					malloc(sizeof(char *) * (__count_words(s, delim) + 1));

	assert(buf != NULL);
	idx = 0;
	while (*s != '\0')
	{
		if (*s == delim)
		{
			++s;
			continue ;
		}
		begin = s;
		while (*s != '\0' && *s != delim)
			++s;
		buf[idx++] = ft_strdup(begin, s);
	}
	buf[idx] = NULL;
	return (buf);
}

static int	__count_words(const char *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s != '\0')
	{
		cnt += (*s != c && (*(s + 1) == '\0' || *(s + 1) == c));
		++s;
	}
	return (cnt);
}
