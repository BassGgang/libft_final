/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:11:26 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/05/02 22:50:13 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while(s1[i] != '\0' && i < (int)len)
	{
		while(s1[i + j] == s2[j]) //s1[i +j] != 0 && s2[j] != 0 がないと2回多く回る
		{
			printf("%c\n",s1[i + j]);
			printf("%c\n",s2[j]);
			printf("%d\n",j);
			printf("\n");
			j ++;
		}
		if (j == ft_strlen((char *)s2))
			return ((char *)&s1[i]);
		i ++;
	}
	printf("j = %d\n",j);
	printf("strlen = %d\n",ft_strlen((char *)s2));
	return (NULL);

}

int main (void)
{
	char a[] = "aaakenaaa";
	char b[] = "ken";
	 printf("mine =%s\n",ft_strnstr(a,b,9));
	printf("\n\ngen =%s\n",strnstr(a,b,9));
    return 0;
}