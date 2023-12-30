/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:56:31 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 01:35:56 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Removes the space before and after the string that str points to.
 * @param str 
 * @param set 
 * @return
 * Returns the string with the before and after spaces removed.
 */
char	*ft_strtrim(const char *str, const char *set)
{
	const char	*begin;
	const char	*end;

	assert(str != NULL && set != NULL);
	begin = str;
	while (*begin && ft_strchr(set, *begin) != NULL)
		++begin;
	end = str + ft_strlen(str) - 1;
	while (end > begin && ft_strchr(set, *end) != NULL)
		--end;
	return (ft_strdup(begin, end + 1));
}
