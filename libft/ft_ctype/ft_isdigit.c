/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:06:52 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 18:51:23 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * checks for a digit (0 through 9).
 */
bool	ft_isdigit(char c)
{
	assert(ft_isascii(c) == true);
	return ((__ctype_table(c) & digit) != 0);
}
