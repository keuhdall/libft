/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 22:59:18 by lmarques          #+#    #+#             */
/*   Updated: 2016/09/03 21:25:12 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	count;
	size_t	count2;
	size_t	count3;

	count = 0;
	if (s2[count] == '\0')
		return ((char *)s1);
	while (s1[count] && count < n)
	{
		count2 = count;
		count3 = 0;
		while (s1[count2] == s2[count3])
		{
			count2++;
			count3++;
		}
		if (count3 >= (size_t)ft_strlen(s2))
			return ((char *)s1 + count);
		count++;
	}
	return (0);
}
