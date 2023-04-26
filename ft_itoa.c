/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9ft_itoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <kraddhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 20:16:24 by kraddhan          #+#    #+#             */
/*   Updated: 2023/04/21 21:08:40 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(long int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	int			i;
	long int	num;

	i = count_digits(n);
	ptr = (char *)malloc(sizeof(char) * i + 1);
	num = n;
	if (ptr == NULL)
		return (NULL);
	ptr[i] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (num < 0)
	{
		ptr[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		ptr[--i] = num % 10 + 48;
		num = num / 10;
	}
	return (ptr);
}
