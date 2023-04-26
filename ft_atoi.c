/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <kraddhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:53:35 by kraddhan          #+#    #+#             */
/*   Updated: 2023/04/21 22:43:18 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int		sign;
	int		number;
	int		i;

	sign = 1;
	number = 0;
	i = 0;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == 45 || s[i] == 43)
	{
		if (s[i] == 45)
			sign = sign * -1;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		number = number * 10 + (s[i] - 48);
		i++;
	}
	return (sign * number);
}
