/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 18:10:00 by kmatsuna          #+#    #+#             */
/*   Updated: 2025/01/26 20:03:09 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}

// int main (void)
// {
// 	char a = 'a';
// 	printf("mine=%c\n",ft_toupper(a));
// 	printf("gen =%c\n",toupper(a));
//     return (0);
// }