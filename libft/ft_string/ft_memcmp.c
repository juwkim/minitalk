/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:39:11 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 01:06:02 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Compares the first n bytes (each interpreted as unsigned char)
 * of the memory areas mem1 and mem2.
 * @param mem1 
 * @param mem2 
 * @param n 
 * @return
 * returns an integer less than, equal to, or greater than zero
 * if the first n bytes of mem1 is found, respectively,
 * to be less than, to match, or be greater than the first n bytes of mem2.
 * For a nonzero return value, the sign is determined by the sign of
 * the difference between the first pair of bytes (interpreted as unsigned char)
 * that differ in mem1 and mem2. If n is zero, the return value is zero.
 */
int	ft_memcmp(const void *mem1, const void *mem2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	assert(mem1 != NULL && mem2 != NULL);
	ptr1 = (unsigned char *) mem1;
	ptr2 = (unsigned char *) mem2;
	while (--n && *ptr1 && *ptr1 != *ptr2)
	{
		++ptr1;
		++ptr2;
	}
	return (*ptr1 - *ptr2);
}
