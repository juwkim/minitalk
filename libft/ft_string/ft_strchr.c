/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:49:42 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 01:15:59 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * 
 * @param str 
 * @param c 
 * @return
 * returns a pointer to the first occurrence of the character c
 * in the string str.
 */
char	*ft_strchr(const char *str, const char c)
{
	while (*str != '\0' && *str != c)
		++str;
	return ((char *) str);
}
