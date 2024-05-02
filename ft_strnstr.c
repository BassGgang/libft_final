/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:11:26 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/05/02 21:57:29 by kmatsuna         ###   ########.fr       */
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
		while(s1[i + j] == s2[j])
		{
			printf("%c\n",s1[i + j]);
			printf("%c\n",s2[j]);
			printf("%d\n",j);
			printf("\n");
			j ++;
		}
		i ++;
	}
	printf("j = %d\n",j);
	printf("strlen = %d\n",ft_strlen((char *)s2));
	if (j-1 == ft_strlen((char *)s2))
		return ((char *)&s1[i]);
	return (NULL);

}

int main (void)
{
	char a[] = "aaakenaaaa";
	char b[] = "ken";
	// printf("%s\n",strnstr(a,b,9));
	 printf("%s\n",ft_strnstr(a,b,9));
    return 0;
}