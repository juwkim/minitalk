/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:50:13 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:28:41 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * checks for a lowercase character.
 */
bool	ft_islower(char c)
{
	assert(ft_isascii(c) == true);
	return ((__ctype_table(c) & lower) != 0);
}
