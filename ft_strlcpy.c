/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:57:07 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/04/27 19:10:20 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *c)
{
	if (c == NULL)
		return (0);
	int	i;

	i = 0;
	while (c[i] != 0)
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	int	i;
	int dstsize;

	i = 0;
	dstsize = ft_strlen(dst);
	// printf("size = %d\n",(int)size);
	if (size == 0 || dst == NULL)
		return (ft_strlen(src));
	while ((int)size - 1 > 0 && src[i] != '\0')
	{
		// printf("wan");
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	// char	a[] = NULL;
// 	char	b[] = "";
	
// 	// printf("%s\n", a);
// 	ft_strlcpy(NULL, b, 0);
// 	printf("%lu\n", ft_strlcpy(NULL, b, 0));

//     // char ag[] = NULL;
//     char bg[] = "";
// 	strlcpy(NULL,bg,0);
//     // printf("%s\n",ag);
//     printf("%lu\n",strlcpy(NULL,bg,0));

// return (0);
// }