/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:06:40 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:26:20 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief
 * checks whether c is a 7-bit unsigned char value
 * that fits into the ASCII character set
 */
bool	ft_isascii(char c)
{
	return ((c & ~0x7f) == 0);
}
