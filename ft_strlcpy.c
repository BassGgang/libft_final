/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:57:07 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/04/27 12:30:53 by kmatsuna         ###   ########.fr       */
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

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	int	i;

	i = 0;
	while (size - 1 > 0)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	b[] = "a";
// 	char	a[] = "jyonta";

// 	ft_strlcpy(a, b, 10);
// 	printf("%s\n", a);
// 	printf("%lu\n", ft_strlcpy(a, b, 5));
// 	return (0);
// }

// // GENUIN
// int main(void)
// {
//     char a[] = "kenta";
//     char b[] = "jyonta";

// 	strlcpy(a,b,5);

//     printf("%s\n",a);
//     printf("%lu\n",strlcpy(a,b,5));

// return (0);
// }