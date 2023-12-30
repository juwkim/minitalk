/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:53:25 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 01:31:28 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Finds the first occurrence of the substring needle in the string haystack
 * The terminating null bytes ('\0') are not compared.
 * @param haystack 
 * @param needle 
 * @return
 * Return a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char	*ft_strstr(const char *haystack, const char *needle)
{
	const int	needle_len = ft_strlen(needle);

	assert(haystack != NULL && needle != NULL && needle_len > 0);
	while (*haystack)
	{
		if (ft_memcmp(haystack, needle, needle_len) == 0)
			return ((char *) haystack);
		++haystack;
	}
	return (NULL);
}
