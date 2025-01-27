/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:21:56 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/01/27 20:42:33 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	is_include(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	check_start(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && is_include(s1[i], set))
		i++;
	return (i);
}

size_t	check_fin(const char *s1, const char *set)
{
	size_t	i;

	i = ft_strlen(s1);
	while (i && is_include(s1[i - 1], set))
		i--;
	return (i);
}

char	*ft_strtrim(const char *s1, char const *set)
{
	size_t	str;
	size_t	fin;
	char	*re;

	str = check_start(s1, set);
	fin = check_fin(s1, set);
	re = ft_substr(s1, str, fin - str);
	return (re);
}
