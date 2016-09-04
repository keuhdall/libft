/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 23:12:49 by lmarques          #+#    #+#             */
/*   Updated: 2016/09/02 20:31:12 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			count;

	str = (unsigned char*)s;
	count = 0;
	while (str[count] && count < n)
	{
		if (str[count] == (unsigned char)c)
			return ((void *)&str[count]);
		count++;
		str++;
	}
	return (0);
}
