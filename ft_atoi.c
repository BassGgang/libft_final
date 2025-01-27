/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:06:08 by jnishimu          #+#    #+#             */
/*   Updated: 2025/01/27 19:28:49 by kmatsuna         ###   ########.fr       */
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
			return (0);
		return (-1);
	}
	return (re * sign);
}

// --MEMO--
// int is_not_long_rangの戻り値である
// 	return (a > long_div || (a == long_div && b > long_mod));
// の条件式に注意が必要。

// --MEMO--
// is_not_long_rangにて不具合が発生。
// →具体的にはstr[i]をstr[i]-'0'として引数を渡したがis_not_rang関数内で反映されない
// →ft_atoi関数内でprintfを行って見るとis_not_rang関数にも反映された。
// →テスターでも反映されないものが判定されいたので割とガチで謎
//  #include<stdio.h>
// int main (void)
// {
//     char a [] = "-4";
//     printf("gen =%d\n",atoi(a));
//     printf("mine %d\n",ft_atoi(a));

//     return (0);
// }