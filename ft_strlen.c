/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:56:04 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/04/22 19:37:03 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != 0)
		i++;
	return (i);
}

/* int main(void)
{
	char a[] = "kenkenken";
	printf("num = %d\n", ft_strlen(a));
	printf("num = %lu\n", strlen(a));

	return (0);
} */