/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 01:10:19 by lmarques          #+#    #+#             */
/*   Updated: 2016/09/02 17:44:24 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	size_t	count;
	char	*str;

	count = 0;
	str = (char *)malloc(sizeof(char) * size + 1);
	if (str)
	{
		while (count < size + 1)
		{
			str[count] = '\0';
			count++;
		}
	}
	return (str);
}
