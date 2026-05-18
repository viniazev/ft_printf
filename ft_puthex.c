/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinida-s <vinida-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:58:28 by vinida-s          #+#    #+#             */
/*   Updated: 2026/05/18 17:40:34 by vinida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_lower(unsigned int n)
{
	char	*str;
	int		total;

	str = "0123456789abcdef";
	total = 0;
	if (n >= 16)
	{
		total += ft_puthex_lower(n / 16);
		total += ft_putchar(str[n % 16]);
	}
	else
	{
		total += ft_putchar(str[n % 16]);
	}
	return (total);
}

int	ft_puthex_upper(unsigned int n)
{
	char	*str;
	int		total;

	str = "0123456789ABCDEF";
	total = 0;
	if (n >= 16)
	{
		total += ft_puthex_upper(n / 16);
		total += ft_putchar(str[n % 16]);
	}
	else
	{
		total += ft_putchar(str[n % 16]);
	}
	return (total);
}

// int	main(void)
// {
// 	unsigned int i = 234;

// 	ft_puthex_upper(i);
// 	write(1, "\n", 1);
// 	ft_puthex_lower(i);

// 	return (0);
// }