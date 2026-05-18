/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testsuit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinida-s <vinida-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 17:02:25 by vinida-s          #+#    #+#             */
/*   Updated: 2026/05/18 18:21:30 by vinida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int				num;
	unsigned int	hex;
	int				*ptr;
    char            *str;

	num = 234;
	hex = 233424;
    str = "Sou uma string.";
    ft_printf("\t\tTESTES DO FT_PRINTF\n");
	ft_printf("O numero 'e:%05d\nO hexadecimal 'e: %X\n", num, hex);
	ft_printf("O ponteiro 'e:%p\n", ptr);
    ft_printf("%.2s\n", str);
	ft_printf(NULL);
    ft_printf("\t\tTESTES DO PRINTF\n");
	printf("O numero 'e:%.1d \n", num);
    printf("O hexadecimal 'e: %#X\n", hex);
	printf("O ponteiro 'e: %p\n", ptr);
    printf("%s", str);
	printf(NULL);
	return (0);
}
