/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 05:11:34 by lmarques          #+#    #+#             */
/*   Updated: 2016/08/27 00:29:48 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	count;
	int	count2;
	int	count3;

	count = 0;
	if (s2[count] == '\0')
		return ((char *)s1);
	while (s1[count])
	{
		count2 = count;
		count3 = 0;
		while (s1[count2] == s2[count3])
		{
			count2++;
			count3++;
		}
		if (count3 >= ft_strlen(s2))
			return ((char *)s1 + count);
		count++;
	}
	return (0);
}
