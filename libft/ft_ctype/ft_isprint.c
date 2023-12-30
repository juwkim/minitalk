/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:33:02 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:28:58 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * checks for any printable character including space.
 */
bool	ft_isprint(char c)
{
	assert(ft_isascii(c) == true);
	return ((__ctype_table(c) & print) != 0);
}
