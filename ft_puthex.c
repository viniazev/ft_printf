/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinida-s <vinida-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:58:28 by vinida-s          #+#    #+#             */
/*   Updated: 2026/05/08 22:55:14 by vinida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_puthex_lower(unsigned int n)
{
	char	*str;
	char	*hex;
	int		res;
	int		i;

	hex = malloc((sizeof(int) * 2) + 1);
	if (!hex)
		return (0);
	str = "0123456789abcdef";
	if (n == 0)
	{
		hex[0] = '0';
		return (1);
	}
	i = 0;
	while (n > 0)
	{
		res = n % 16;
		hex[i] = str[res];
		n /= 16;
		i++;
	}
	hex[i] = '\0';
	return (i);
}

int	ft_puthex_upper(unsigned int n)
{
	char	*str;
	char	*hex;
	int		res;
	int		i;

	hex = malloc((sizeof(int) * 2) + 1);
	if (!hex)
		return (0);
	str = "0123456789ABCDEF";
	if (n == 0)
	{
		hex[0] = '0';
		return (1);
	}
	i = 0;
	while (n > 0)
	{
		res = n % 16;
		hex[i] = str[res];
		n /= 16;
		i++;
	}
	hex[i] = '\0';
	return (i);
}

// int	main(void)
// {
// 	char	*hex;

// 	hex = ft_puthex_lower(255);

// 	printf("%s\n", hex);
// 	free(hex);

// 	return (0);
// }
