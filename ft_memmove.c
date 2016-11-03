/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 18:15:48 by lmarques          #+#    #+#             */
/*   Updated: 2016/11/03 12:25:28 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst <= src)
		return (ft_memcpy(dst, src, n));
	while (n > 0)
	{
		((char *)dst)[n] = ((char *)src)[n];
		n--;
	}
	((char *)dst)[n] = ((char *)src)[n];
	return (dst);
}
