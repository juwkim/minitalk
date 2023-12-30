/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:31:39 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:31:49 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * checks for white-space characters.
 * These are: space, form-feed ('\\f'), newline ('\\n'), carriage return ('\\r'),
 * horizon‐tal tab ('\\t'), and vertical tab ('\\v').
 */
bool	ft_isspace(char c)
{
	assert(ft_isascii(c) == true);
	return ((__ctype_table(c) & space) != 0);
}
