/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:11:26 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/01/27 20:41:37 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < len)
		{
			j++;
			if (j == ft_strlen((char *)s2))
				return ((char *)&s1[i]);
		}
		i++;
	}
	if (ft_strlen((char *)s2) == 0)
	{
		return ((char *)s1);
	}
	return (NULL);
}
