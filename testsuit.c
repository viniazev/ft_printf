/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testsuit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinida-s <vinida-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 17:02:25 by vinida-s          #+#    #+#             */
/*   Updated: 2026/05/25 21:22:24 by vinida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int				num;
	unsigned int	hex;
	int				*ptr = NULL;
	char			*str;
	int i;

	num = 234;
	hex = 255;
	str = "Sou uma string.";
	ptr = &num;
	ft_printf("\t\tTESTES DO FT_PRINTF\n");
	i = ft_printf("O numero 'e: %d \n", num);
	ft_printf("O hexadecimal 'e: %X\n", __LONG_MAX__);
	ft_printf("O ponteiro 'e: %p\n", ptr);
	ft_printf("%s\n", str);
	ft_printf(NULL);
	i = ft_printf("valor de i: %d\n", i);
	ft_printf("\t\tTESTES DO PRINTF\n");
	i = printf("O numero 'e: %d \n", num);
	printf("O hexadecimal 'e: %X\n", hex);
	printf("O ponteiro 'e: %p\n", ptr);
	printf("%s", str);
	printf(NULL);
	printf("valor de i: %d\n", i);
	return (0);
}
