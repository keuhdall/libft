/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 21:51:32 by lmarques          #+#    #+#             */
/*   Updated: 2016/09/03 21:20:49 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str_s1;
	char	*str_s2;
	size_t	count;

	str_s1 = (char *)s1;
	str_s2 = (char *)s2;
	count = 0;
	while (str_s1[count] && str_s2[count] &&
			str_s1[count] == str_s2[count] &&
			count < n)
		count++;
	if (count == n)
		return (0);
	return (str_s1[count] - str_s2[count]);
}
