/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 19:17:33 by lmarques          #+#    #+#             */
/*   Updated: 2016/08/27 19:37:34 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_slen(const char *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		count_params;
	int		count_str;
	char	*str;

	count_params = 0;
	count_str = 0;
	str = 0;
	str = (char *)malloc(sizeof(char) * (ft_slen(s1) + ft_slen(s2)) + 1);
	if (str)
	{
		while (count_params < ft_slen(s1))
			str[count_str++] = s1[count_params++];
		count_params = 0;
		while (count_params < ft_slen(s2))
			str[count_str++] = s2[count_params++];
		str[count_str] = '\0';
	}
	return (str);
}
