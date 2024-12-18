/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_pointer_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcurty-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:40:15 by rcurty-g          #+#    #+#             */
/*   Updated: 2024/10/31 12:16:04 by rcurty-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int num, int lowercase)
{
	int		len;
	char	*base;

	len = 0;
	if (lowercase)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num >= 16)
		len += print_hex(num / 16, lowercase);
	len += print_char(base[num % 16]);
	return (len);
}

int	print_pointer(unsigned long ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	len += write(1, "0x", 2);
	len += print_address(ptr);
	return (len);
}

int	print_address(unsigned long addr)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (addr >= 16)
		len += print_address(addr / 16);
	len += print_char(base[addr % 16]);
	return (len);
}
