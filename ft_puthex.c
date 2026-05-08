/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinida-s <vinida-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:58:28 by vinida-s          #+#    #+#             */
/*   Updated: 2026/05/09 00:06:35 by vinida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_lower(unsigned int n)
{
	char	*str;

	str = "0123456789abcdef";
	while (n >= 16)
	{
		ft_putchar(str[n % 16]);
		return (ft_puthex_lower(n / 16));
	}
	return (ft_putchar(str[n % 16]));
}

int	ft_puthex_upper(unsigned int n)
{
	char	*str;

	str = "0123456789ABCDEF";
	while (n >= 16)
	{
		ft_putchar(str[n % 16]);
		return (ft_puthex_upper(n / 16));
	}
	return (ft_putchar(str[n % 16]));
}

// int	main(void)
// {
// 	unsigned int	i = -27364;

// 	ft_puthex_upper(i);
// 	write(1, "\n", 1);
// 	ft_puthex_lower(i);

// 	return (0);
// }