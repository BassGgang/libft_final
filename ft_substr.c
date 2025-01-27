/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 21:26:30 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/01/27 20:42:53 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*re;
	size_t	size;
	size_t	strlen;

	if (ft_strlen((char *)s) <= start)
		return ((char *)ft_calloc(1, 1));
	strlen = ft_strlen((char *)s) - start;
	if (strlen < len)
		size = strlen + 1;
	else
		size = len + 1;
	re = (char *)ft_calloc(size, sizeof(char));
	if (re == NULL)
		return (NULL);
	ft_strlcpy(re, (char *)s + start, size);
	return (re);
}
