/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuna <kmatsuna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 08:26:14 by kmatsuna          #+#    #+#             */
/*   Updated: 2024/05/12 18:00:01 by kmatsuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_calloc(size_t count, size_t size)
{
	size_t bytes;
	void *ptr;
	int i;

	bytes = count * size;
	if (count != 0)
	{
		if(bytes / count != size)
			return (NULL);
	}
	men = malloc(bytes);
	if (men == NULL)
		return(NULL);
	i = 0;
	while(i < bytes)
		ptr[i++] = 0;
	return (prt);
}