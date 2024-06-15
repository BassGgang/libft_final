/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:24:15 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/15 20:13:08 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit(int n)
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
	char *str;
	int digit;

	digit = get_digit(n);
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while(n > 0)
	{
		str [digit] = n % 10 + '0';
		n = n /10;
		digit --;
	}
	return (str);
}

// char *ft_itoa(int n)
// {
// 	char *str;


// 	printf("\n n =%d ",n);
// 	return(str);
// }