/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:06:08 by jnishimu          #+#    #+#             */
/*   Updated: 2025/01/27 20:29:10 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_n(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		i ++;
	return (i);
}

int	ft_atoi(const char *str)
{
	u_int64_t	re;
	int			sign;
	int			i;

	re = 0;
	sign = 1;
	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str ++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str ++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		re = re * 10 + str[i++] - '0';
	if ((ft_strlen_n(str) == 19 && *str != '0' && re > 9223372036854775807)
		|| (ft_strlen_n(str) >= 20 && *str != '0' ))
	{
		if (sign == -1)
			return ((int)0x8000000000000000);
		return ((int)0x7FFFFFFFFFFFFFFF);
	}
	return (re * sign);
}
