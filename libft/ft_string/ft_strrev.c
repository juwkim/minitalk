/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 02:47:23 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 02:07:48 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief 
 * Reverse the string from begin to end.
 * @param begin 
 * @param end 
 */
void	ft_strrev(char *begin, char *end)
{
	char	tmp;

	while (begin < end)
	{
		tmp = *begin;
		*begin = *end;
		*end = tmp;
		++begin;
		--end;
	}
}
