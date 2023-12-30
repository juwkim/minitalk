/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 04:59:11 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:36:16 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * If c is an lowercase letter, returns its uppercase equivalent.
 * Otherwise, it returns c
 */
char	ft_toupper(char c)
{
	assert(ft_isascii(c) == true);
	if (ft_islower(c) == true)
		return (c ^ 0x20);
	return (c);
}
