/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:54:33 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 01:29:35 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * @param str 
 * @param c 
 * @return
 * Returns a pointer to the last occurrence
 * of the character c in the string str. 
 */
char	*ft_strrchr(const char *str, const char c)
{
	const char	*ptr;

	assert(str != NULL);
	ptr = str + ft_strlen(str) - 1;
	while (ptr > str && *ptr != c)
		--ptr;
	return ((char *) ptr);
}
