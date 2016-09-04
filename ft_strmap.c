/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 02:23:06 by lmarques          #+#    #+#             */
/*   Updated: 2016/08/27 19:14:04 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		count;
	char	*str;

	count = 0;
	str = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str)
	{
		while (s[count])
		{
			str[count] = (*f)(s[count]);
			count++;
		}
		str[count] = '\0';
	}
	return (str);
}
