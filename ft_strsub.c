/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 18:41:30 by lmarques          #+#    #+#             */
/*   Updated: 2016/09/02 17:46:31 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*str;

	count = 0;
	str = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str)
	{
		while (count < len)
		{
			str[count] = s[start + count];
			count++;
		}
		str[count] = '\0';
	}
	return (str);
}
