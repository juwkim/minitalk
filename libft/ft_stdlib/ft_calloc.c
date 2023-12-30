/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:03:51 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 01:53:26 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/**
 * @brief 
 * Allocates memory for an array of nmemb elements of size bytes each.
 * The memory is set to zero.
 * @param nmemb 
 * @param size 
 * @return returns a pointer to the allocated memory.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buf;

	buf = malloc(nmemb * size);
	assert(buf != NULL);
	ft_bzero(buf, nmemb * size);
	return (buf);
}
