/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 20:15:06 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 01:27:37 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Appends the n bytes src string to the dest string.
 * @param dest 
 * @param src 
 * @param n 
 */
void	ft_strncat(char *dest, const char *src, size_t n)
{
	ft_memcpy(dest, src, src + n);
}
