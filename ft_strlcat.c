/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:38:41 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/01/27 20:44:43 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		j;
	int		k;
	int		re;

	i = (size_t)ft_strlen(dst);
	j = 0;
	k = dstsize;
	re = i + ft_strlen(src);
	if (i >= dstsize)
		return ((size_t)ft_strlen(src) + dstsize);
	while (k - i - 1 > 0 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (re);
}
