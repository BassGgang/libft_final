/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnishimu <jnishimu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:06:08 by jnishimu          #+#    #+#             */
/*   Updated: 2024/05/07 14:27:07 by jnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int chesp(const char s)
{
    if (s == '\n' || s == '\f' || s == '\t' || s == '\v' || s == '\r' || s == ' ')
        return (1);
    return (0);
}

int chenum(const char s)
{
    if('0' < s && s < '9')
        return (1);
    return (0);
}

int ft_atoi(const char *str)
{
    int i;
    int pm;
    int re;

    i = 0;
    pm = 1;
    re = 0;
    while(chesp(str[i]))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            pm = pm * -1;
        i ++;
    }
    while(chenum(str[i]))
    {
        // printf("%c\n",str[i]);
        re = re * 10;
        re = re + str[i] - '0';
        i ++;
        // printf("re = %d\n",re);
    }
    // if (re == 4294967295)
    //     return (-1);
    // 4294967295の時の処理ができていない　→オーバーアンダーフローの処理ができていない
    // たつやくんの見てもよくわかんない
    return (re * pm);
}

int main (void)
{
    char a [] = "+000000000000000000008";
    printf("gen =%d\n",atoi(a));
    ft_atoi(a);
    printf("mine %d\n",ft_atoi(a));

    return 0;
}