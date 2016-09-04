/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 06:07:14 by lmarques          #+#    #+#             */
/*   Updated: 2016/09/02 18:53:11 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	else
		return (0);
}

int main(void)
{
	for (int i = 0; i < 150; ++i)
		printf("i : %d -> Le mien : %d ; Le vrai : %d\n", i, ft_isalpha(i), isalpha(i));
	return (0);
}
