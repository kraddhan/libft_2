/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:08:06 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 19:08:13 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;
	c = 'a';
	if (ft_isascii(c))
	{
		printf("%c is a 7-bit ASCII character.\n", c);
	}
	else
	{
		printf("%c is not a 7-bit ASCII character.\n", c);
	}
	return (0);
}
*/