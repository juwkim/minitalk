/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:52:42 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 01:26:48 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Calculates the length of the string pointed to by str,
 * excluding the terminating null byte ('\0').
 * @param str 
 * @return Returns the number of bytes in the string pointed to by str.
 */
int	ft_strlen(const char *str)
{
	const char	*ptr = str;

	assert(str != NULL);
	while (*ptr != '\0')
		++ptr;
	return (ptr - str);
}
