/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:33:02 by juwkim            #+#    #+#             */
/*   Updated: 2023/02/28 01:48:51 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief 
 * checks for a character is a punctuation.
 * All punctuations in c:
 * \! \\" # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ ` { | } ~
 */
bool	ft_ispunct(char c)
{
	assert(ft_isascii(c) == true);
	return ((__ctype_table(c) & punct) != 0);
}
