/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 05:11:34 by lmarques          #+#    #+#             */
/*   Updated: 2016/09/09 04:13:29 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	count;
	int	count2;

	count = 0;
	while (s1[count])
	{
		count2 = 0;
		while (s1[count + count2] && s2[count2] &&
			s1[count + count2] == s2[count2])
			count2++;
		if (s2[count2] == '\0')
			return ((char *)(s1 + count));
		count++;
	}
	return (NULL);
}
