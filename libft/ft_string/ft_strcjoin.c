/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:50:56 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 02:24:04 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief
 * Concatenate two strings with c between them.
 * @param str1 
 * @param str2 
 * @param c 
 * @return
 * Returns str1 + c + str2
 */
char	*ft_strcjoin(const char *str1, const char *str2, char c)
{
	char	*buf;
	size_t	str1_size;
	size_t	str2_size;

	assert(str2 != NULL);
	if (str1 == NULL)
		return ((char *) str2);
	str1_size = ft_strlen(str1);
	str2_size = ft_strlen(str2);
	buf = (char *) malloc(sizeof(char) * (str1_size + str2_size + 2));
	assert(buf != NULL);
	ft_memcpy(buf, str1, str1 + str1_size);
	buf[str1_size] = c;
	ft_memcpy(buf + str1_size + 1, str2, str2 + str2_size);
	buf[str1_size + str2_size + 1] = '\0';
	return (buf);
}
