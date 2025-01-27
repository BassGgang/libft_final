/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:22:16 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/01/27 20:34:38 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*sc;

	i = 0;
	sc = (char *)s;
	while (i < (int)n)
	{
		if (sc[i] == (char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
