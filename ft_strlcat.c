/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:38:41 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/04/22 20:33:18 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != 0)
		i++;
	return (i);
}

size_t ft_strlcat(char *dst, char *src, size_t size)
{
    int i;
    int j;

    i = ft_strlen(dst);
    // printf("i = %d", i);
    // printf("dest[%d] = %c\n\n\n",i,dst[i]);
    j = 0;
    while(size > 0 && src[j] != '\0')//ここが間違えている
    {
        dst[i] = src[j];
        i ++;
        j ++;
        size --;
    }
    return (i-1);
}

int main(void)
{
    char a[30] = "kenta";
    char ag[30] = "kenta";
    char b[] = "jyonta";
    char bg[] = "jyonta";

    ft_strlcat(a,b,9);
    printf("    %s\n" ,ag);
    printf("    %lu\n" ,ft_strlcat(a,b,2));
    

    strlcat(ag,bg,9);
    printf("gen %s\n" ,ag);
    printf("gen %lu\n" ,strlcat(ag,bg,2));
    return 0;
}