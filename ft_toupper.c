/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kraddhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:26:11 by kraddhan          #+#    #+#             */
/*   Updated: 2023/02/20 19:26:14 by kraddhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/* int main() 
{
    char ch = 'a';  // character to be converted to uppercase

    ch = ft_toupper(ch);  // convert ch to uppercase

    printf("Uppercase equivalent of the character is %c\n", ch);

    return 0;
} */
