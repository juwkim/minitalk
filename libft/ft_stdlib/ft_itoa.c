/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:27:03 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 02:08:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/**
 * @brief 
 * Converts an integer to ASCII string.
 * @param buf 
 * @param num 
 * @param base 
 * @param lower 
 * @return Returns the length of the converted string.
 */
int	ft_itoa(char *buf, unsigned long num, int base, int lower)
{
	static const char	digits[16] = "0123456789ABCDEF";
	char				*ptr;

	ptr = buf;
	while (1)
	{
		*ptr++ = digits[num % base] | lower;
		num /= base;
		if (num == 0)
			break ;
	}
	ft_strrev(buf, ptr - 1);
	return (ptr - buf);
}
