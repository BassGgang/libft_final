/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:24:15 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/01/27 20:33:18 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			digit;
	long int	long_int;

	long_int = (long int)n;
	digit = get_digit(long_int);
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (str == NULL)
		return (NULL);
	if (long_int == 0)
		str[0] = '0';
	if (long_int < 0)
	{
		str[0] = '-';
		long_int = long_int * -1;
	}
	str[digit] = '\0';
	digit--;
	while (long_int > 0)
	{
		str[digit] = long_int % 10 + '0';
		long_int = long_int / 10;
		digit--;
	}
	return (str);
}
