/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:53:13 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 01:21:05 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Compares the two strings str1 and str2.
 * The comparison is done using unsigned characters.
 * @param str1 
 * @param str2 
 * @return
 * returns an integer indicating the result of the comparison, as follows:
 * • 0, if the str1 and str2 are equal.
 * • a negative value if str1 is less than str2.
 * • a positive value if str1 is greater than str2.
 */
int	ft_strcmp(const char *str1, const char *str2)
{
	while (*str1 && *str1 == *str2)
	{
		++str1;
		++str2;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
