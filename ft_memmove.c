/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 18:15:48 by lmarques          #+#    #+#             */
/*   Updated: 2016/09/02 17:40:05 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*str_src;
	char	*str_dst;
	char	*tmp;
	size_t	count;

	str_src = (char *)src;
	str_dst = (char *)dst;
	tmp = (char *)malloc(sizeof(char) * ft_strlen(str_src) + 1);
	count = 0;
	if (tmp)
	{
		while (str_src[count] && count < n)
		{
			tmp[count] = str_src[count];
			count++;
		}
		count = 0;
		while (tmp[count])
		{
			str_dst[count] = tmp[count];
			count++;
		}
		free(tmp);
	}
	return (dst);
}
