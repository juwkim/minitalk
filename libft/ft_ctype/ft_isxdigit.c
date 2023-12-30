/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:04:38 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 01:43:39 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * checks for hexadecimal digits.
 * That is, one of 0 1 2 3 4 5 6 7 8 9 a b c d e f A B C D E F.
 */
bool	ft_isxdigit(char c)
{
	assert(ft_isascii(c) == true);
	return ((__ctype_table(c) & xdigit) != 0);
}
