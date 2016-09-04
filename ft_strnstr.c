/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 22:59:18 by lmarques          #+#    #+#             */
/*   Updated: 2016/09/04 18:15:54 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	count;
	size_t	count2;

	count = 0;
	while (s1[count])
	{
		count2 = 0;
		while (count2 < n && s2[count2] && s1[count + count2] &&
				s1[count + count2] == s2[count2])
				count2++;
		if (s2[count2] == '\0' || count2 == n)
			return ((char *)(s1 + count));
		count++;
	}
	return (0);
}
