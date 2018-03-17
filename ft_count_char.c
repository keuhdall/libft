/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 15:35:38 by lmarques          #+#    #+#             */
/*   Updated: 2018/03/17 15:38:29 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_char(char *s, const char c)
{
	int	count_s;
	int	count_c;

	count_s = -1;
	count_c = 0;
	while (s[++count_s])
	{
		if (s[count_s] == c)
			count_c++;
	}
	return (count_c);
}
