/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:06:40 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:26:38 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * checks for a blank character. that is, a space or a tab.
 */
bool	ft_isblank(char c)
{
	assert(ft_isascii(c) == true);
	return ((__ctype_table(c) & blank) != 0);
}
