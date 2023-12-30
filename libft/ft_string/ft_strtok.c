/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:38:36 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 01:33:51 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Breaks a string into a sequence of zero or more nonempty tokens.
 * On the first call to ft_strtok(), the string to be parsed
 * should be specified in str. In each subsequent call that should parse
 * the same string, str must be NULL.
 * @param str 
 * @param delim 
 * @return
 * Return a pointer to the next token, or NULL if there are no more tokens.
 */
char	*ft_strtok(char *str, char delim)
{
	static char	*input;
	char		*res;
	int			idx;

	if (str != NULL)
		input = str;
	if (input == NULL)
		return (NULL);
	res = malloc(ft_strlen(input) + 1);
	assert(res != NULL);
	idx = 0;
	while (input[idx] != '\0' && input[idx] != delim)
	{
		res[idx] = input[idx];
		++idx;
	}
	res[idx] = '\0';
	if (input[idx] == '\0')
		input = NULL;
	else
		input += idx + 1;
	return (res);
}
