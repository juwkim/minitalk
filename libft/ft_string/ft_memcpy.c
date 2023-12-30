/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:41:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 18:10:18 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief
 * Copies n bytes from memory area src to memory area dest.
 * The memory areas must not overlap.
 */
void	ft_memcpy(void *const dest, const void *const begin, \
											const void *const end)
{
	unsigned char		*dest_ptr;
	unsigned char		*src_ptr;
	const unsigned char	*end_ptr = end;

	assert(dest != NULL && begin != NULL && end != NULL);
	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) begin;
	while (src_ptr < end_ptr)
		*dest_ptr++ = *src_ptr++;
}
