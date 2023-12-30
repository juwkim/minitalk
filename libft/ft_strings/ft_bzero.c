/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:03:25 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 01:01:47 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"

/**
 * @brief 
 * Erases the data in the n bytes of the memory starting at the location
 * pointed to by ptr, by writing zeros.
 * @param ptr 
 * @param n 
 */
void	ft_bzero(void *ptr, int n)
{
	ft_memset(ptr, 0, n);
}
