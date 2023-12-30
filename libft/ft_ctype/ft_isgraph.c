/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:49:12 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:28:21 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * checks for any printable character except space. 
 */
bool	ft_isgraph(char c)
{
	assert(ft_isascii(c) == true);
	return ((__ctype_table(c) & graph) != 0);
}
