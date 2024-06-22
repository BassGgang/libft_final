/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:33:19 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/06/22 22:31:45 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	get_size(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static size_t	index_of(char const *s, char c, unsigned int start)
{
	size_t	i;

	i = start;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (ft_strlen(s));
}

char	**ft_split(char const *s, char c)
{
	int		c_count;
	char	**re;
	int		i;
	int		index;
	int		next_index;

	index = 0;
	next_index = index_of(s, c, 0);
	c_count = get_size(s, c);
	re = (char **)malloc(sizeof(char *) * (c_count + 1));
	if (!re)
		return (0);
	while (i < c_count)
	{
		printf("index = %zu\n", index);
		printf("next_index = %zu\n", next_index);
		if (index != next_index)
			re[i++] = ft_substr(s, (unsigned int)index, next_index - index);
		index = next_index + 1;
		next_index = index_of(s, c, index);
	}
	re[i] = 0;
	return (re);
}

// int main(void)
// {
// 	char a[] = "ebi kani tatsuya";
// 	char b = ' ';

// 	ft_sprit(a,b);
// }

// 二次元配列なので、分けたら何文字になるか考える。
// わかったら分ける