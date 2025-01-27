/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:28:06 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/01/27 20:35:34 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;
	int					i;

	d = dest;
	s = src;
	i = 0;
	if (s < d)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else if (s > d)
	{
		while (len > 0)
		{
			d[i] = s[i];
			i++;
			len--;
		}
	}
	return (dest);
}
