/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:08:55 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/16 16:12:54 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
#include <stdio.h>
int main(void)
{
    printf("return test1 = %c\n", ft_toupper('a'));
    printf("return test2 = %c\n", ft_toupper('z'));
    printf("return test3 = %c\n", ft_toupper('A'));
    printf("return test4 = %c\n", ft_toupper('3'));
    return (0);
}
*/
