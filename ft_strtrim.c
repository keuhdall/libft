/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 20:16:42 by lmarques          #+#    #+#             */
/*   Updated: 2016/08/27 21:33:55 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nchar(const char *s)
{
	int	count;
	int	count_char;

	count = 0;
	count_char = 0;
	while (s[count] && (s[count] == ' ' ||
			s[count] == '\n' || s[count] == '\t'))
		count++;
	while (s[count] && s[count] != ' ' && s[count] != '\n' && s[count] != '\t')
	{
		count_char++;
		count++;
	}
	return (count_char);
}

char	*ft_strtrim(char const *s)
{
	int		count_s;
	int		count_str;
	char	*str;

	count_s = 0;
	count_str = 0;
	str = 0;
	str = (char *)malloc(sizeof(char) * ft_nchar(s) + 1);
	if (str)
	{
		while (s[count_s] && (s[count_s] == ' ' ||
				s[count_s] == '\n' || s[count_s] == '\t'))
			count_s++;
		while (s[count_s] && s[count_s] != ' ' &&
				s[count_s] != '\n' && s[count_s] != '\t')
		{
			str[count_str] = s[count_s];
			count_str++;
			count_s++;
		}
		str[count_str] = '\0';
	}
	return (str);
}
