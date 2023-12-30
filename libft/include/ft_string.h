/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 00:47:18 by juwkim            #+#    #+#             */
/*   Updated: 2023/03/01 18:08:48 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stdlib.h>
# include <assert.h>

# include "libft.h"

void	ft_memset(const void *mem, const unsigned char c, size_t n);
int		ft_memcmp(const void *mem1, const void *mem2, size_t n);
void	ft_memcpy(void *const dest, const void *const begin, \
											const void *const end);

int		ft_strlen(const char *str);

char	*ft_strchr(const char *str, const char c);
char	*ft_strrchr(const char *str, const char c);

char	*ft_strstr(const char *haystack, const char *needle);

int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncmp(const char *str1, const char *str2, size_t n);

void	ft_strcat(char *dest, const char *src);
void	ft_strncat(char *dest, const char *src, size_t n);

void	ft_strcpy(char *dest, const char *src);

char	*ft_strdup(const char *begin, const char *end);

void	ft_strrev(char *begin, char *end);

char	*ft_strtok(char *str, char delim);
char	*ft_strtrim(const char *str, const char *set);

char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_strcjoin(const char *str1, const char *str2, char c);

char	**ft_split(const char *s, const char delim);

#endif // FT_STRING_H
