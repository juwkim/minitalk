/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 02:01:30 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 19:15:59 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/**
 * @brief 
 * Converts the initial portion of the string pointed to by nptr to int
 * @param nptr 
 * @return The converted value.
 */
int	ft_atoi(const char *nptr)
{
	int		num;
	t_sign	sign;

	sign = PLUS;
	if (*ft_strchr("+-", *nptr) != '\0')
		sign = (*nptr++ == '-');
	num = 0;
	while (ft_isdigit(*nptr) == true)
		num = num * 10 + (*nptr++ - '0');
	if (sign == MINUS)
		return (-num);
	return (num);
}
