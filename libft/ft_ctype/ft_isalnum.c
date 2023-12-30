/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:04:24 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:24:32 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * checks for an alphanumeric character.
 * it is equivalent to (isalpha(c) || isdigit(c))
 */
bool	ft_isalnum(char c)
{
	assert(ft_isascii(c) == true);
	return ((__ctype_table(c) & alnum) != 0);
}
