/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 01:22:39 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:38:18 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/**
 * @brief 
 * Returns the smaller of a and b.
 */
int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
