/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:31:28 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:37:42 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/**
 * @brief 
 * Returns the larger of a and b.
 */
int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
