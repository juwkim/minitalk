/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:50:56 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 02:23:47 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief
 * Concatenate two strings into a new string.
 * @param str1 
 * @param str2 
 * @return
 * Returns str1 + str2
 */
char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*buf;
	size_t	str1_size;
	size_t	str2_size;

	assert(str2 != NULL);
	if (str1 == NULL)
		return ((char *) str2);
	str1_size = ft_strlen(str1);
	str2_size = ft_strlen(str2);
	buf = (char *) malloc(sizeof(char) * (str1_size + str2_size + 1));
	assert(buf != NULL);
	ft_memcpy(buf, str1, str1 + str1_size);
	ft_memcpy(buf + str1_size, str2, str2 + str2_size);
	buf[str1_size + str2_size] = '\0';
	return (buf);
}
