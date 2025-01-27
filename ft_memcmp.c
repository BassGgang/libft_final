/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:23:43 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/01/27 20:35:04 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sc1;
	const unsigned char	*sc2;

	sc1 = s1;
	sc2 = s2;
	i = 0;
	while (i < n)
	{
		if (sc1[i] != sc2[i])
			return ((unsigned int)sc1[i] - (unsigned int)sc2[i]);
		i++;
	}
	return (0);
}
