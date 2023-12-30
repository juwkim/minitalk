/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:17:32 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/27 22:55:16 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stdbool.h>
# include <stdint.h>
# include <stdlib.h>
# include <assert.h>

# include "libft.h"

typedef enum s_sign
{
	PLUS,
	MINUS
}	t_sign;

int		ft_abs(int a);
int		ft_atoi(const char *str);
int		ft_itoa(char *buf, unsigned long num, int base, int lower);
void	*ft_calloc(size_t nmemb, size_t size);

#endif // FT_STDLIB_H
