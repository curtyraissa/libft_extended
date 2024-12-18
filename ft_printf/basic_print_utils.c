/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_print_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:54:50 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/31 12:00:18 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_str(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
		len += print_char(*str++);
	return (len);
}

int	print_nbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nbr < 0)
	{
		len += print_char('-');
		nbr = -nbr;
	}
	if (nbr > 9)
		len += print_nbr(nbr / 10);
	len += print_char((nbr % 10) + '0');
	return (len);
}

int	print_unsigned(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr > 9)
		len += print_unsigned(nbr / 10);
	len += print_char((nbr % 10) + '0');
	return (len);
}
