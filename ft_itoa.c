/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 21:36:58 by lmarques          #+#    #+#             */
/*   Updated: 2016/09/10 01:41:22 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
/*
static	int	ft_slen(const char *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

static char	*ft_reverse(char *str, size_t len)
{
	int		count;
	int		end;
	char	temp;

	count = 0;
	end = len - 1;
	while (count < end)
	{
		temp = str[count];
		str[count] = str[end];
		str[end] = str[temp];
		count++;
		end--;
	}
}

static int	ft_count_nb(int nb)
{
	int	count;

	count = 0;
	if (nb >= -9 && nb <= 9)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 1)
	{
		nb /= 10;
		count++;
	}
	return (count);
}
*/
char	*ft_itoa(int nb)
{
/*
	int		count;
	int		tmp;
	int		is_negative;
	char	*str;

	count = 0;
	tmp = 0;
	is_negative = 0;
	str = 0;
	str = (char *)malloc(sizeof(char) * ft_count_nb(nb) + 2);
	if (str)
	{
		if (nb == 0)
			return ("0");
		if (nb < 0)
		{
			nb = -nb;
			is_negative = 1;
		}
		while (nb != 0)
		{
			tmp = nb % 10;
			if (tmp > 9)
				str[count] = (tmp - 10) + 'a';
			else
				str[count] = tmp + '0';
			count++;
			nb /= 10;
		}
		if (is_negative == 1)
			str[count++] = '-';
		str[count] = '\0';
		str = ft_reverse(str, count);
	}
	return (str);
*/
	nb++;
	return ("0");
}
