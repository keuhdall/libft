/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 05:04:27 by lmarques          #+#    #+#             */
/*   Updated: 2016/08/27 02:44:11 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strnequ(const char *s1, const char *s2, int n)
{
	int count;

	count = 0;
	while (s1[count] && s2[count] && s1[count] == s2[count] && count < n)
		count++;
	return (s1[count] - s2[count]);
}
