/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:14:07 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:38:40 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/**
 * @brief 
 * Return the middle of the three.
 */
int	ft_median(int a, int b, int c)
{
	return (ft_max(ft_min(a, b), ft_min(ft_max(a, b), c)));
}
