/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 05:01:21 by lmarques          #+#    #+#             */
/*   Updated: 2016/08/27 02:42:49 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(const char *s1, const char *s2)
{
	int	count;

	count = 0;
	while (s1[count] && s2[count] && s1[count] == s2[count])
		count++;
	return (s1[count] - s2[count]);
}
