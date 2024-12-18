/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:30:58 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/16 16:03:14 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    printf("return test1 = %d\n", ft_isascii(65));
    printf("return test2 = %d\n", ft_isascii(128));
    printf("return test3 = %d\n", ft_isascii(0));
    printf("return test4 = %d\n", ft_isascii(-1));
    return (0);
}
*/
