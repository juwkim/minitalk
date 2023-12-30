/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 02:22:21 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 00:58:52 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/**
 * @brief 
 * @param a 
 * @return Returns the absolute value of the integer argument.
 */
int	ft_abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}
