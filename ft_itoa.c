/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:24:15 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/16 15:47:47 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

// static char	*get_figure(int n, int digit, char *str)
// {
// 	while(digit >= 0)
// 	{
// 		str [digit] = n % 10 + '0';
// 		n = n /10;
// 		digit --;
// 	}
// 	return (str);
// }

char	*ft_itoa(int n)
{
	char	*str;
	int		digit;
	long int long_int;

	long_int = (long int) n;
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
	while (long_int > 0)
	{
		str[digit] = long_int % 10 + '0';
		long_int = long_int / 10;
		digit--;
	}
	return (str);
}

// char *ft_itoa(int n)
// {
// 	char *str;

// 	printf("\n n =%d ",n);
// 	return(str);
// }