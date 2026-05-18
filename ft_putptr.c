/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinida-s <vinida-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:14:35 by vinida-s          #+#    #+#             */
/*   Updated: 2026/05/18 16:49:59 by vinida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int		total;
	char	*prefix;

	prefix = "0x";
	total = 0;
	total += ft_putstr(prefix);
	total += ft_puthex_lower((unsigned long)ptr);
	return (total);
}

// #include <stdio.h>

// int main(void)
// {
//     int     total;
//     int     *ptr;
//     int     *ptr2;

//     total = ft_putptr(ptr);
//     printf("\n%d\n", total);
//     total = ft_putptr(ptr2);
//     printf("\n%d\n", total);
//     return (0);
// }