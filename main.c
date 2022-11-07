/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:04:32 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/06 18:04:32 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
	/*Test with %s */
    char print_string[] = "JOJOJOJOJOJO";
	printf("||Test with string||\n\n");
	printf("\nReturn ft:%d\n", ft_printf("ft: %s", print_string));
	printf("\nReturn lb:%d\n\n", printf("lb: %s", print_string));

	/*Test with %p */
	printf("||Test with address||\n\n");
	printf("\nReturn ft:%d\n", ft_printf("ft: %p", print_string));
	printf("\nReturn lb:%d\n\n", printf("lb: %p", print_string));

	/*Test with %d || %i */
   	int decimal = 2147483647;
	printf("||Test with decimal||\n\n");
	printf("\nReturn ft:%d\n", ft_printf("ft: %d", decimal));
	printf("\nReturn lb:%d\n\n", printf("lb: %d", decimal));
	printf("||Test with intgeger||\n\n");
	printf("\nReturn ft:%d\n", ft_printf("ft: %i", decimal));
	printf("\nReturn lb:%d\n\n", printf("lb: %i", decimal));

	/*Test with %c */
	char c = 'f';
	printf("||Test with character||\n\n");
	printf("\nReturn ft:%d\n", ft_printf("ft: %c", c));
	printf("\nReturn lb:%d\n\n", printf("lb: %c", c));

	/*Test with %u */
	unsigned int ui = 4294967295;
	printf("||Test with unsigned integer||\n\n");
	printf("\nReturn ft:%d\n", ft_printf("ft: %u", ui));
	printf("\nReturn lb:%d\n\n", printf("lb: %u", ui));

	/*Test with %x */
	int	hex = 2525;
	printf("||Test with hex||\n\n");
	printf("\nReturn ft:%d\n", ft_printf("ft: %x", hex));
	printf("\nReturn lb:%d\n\n", printf("lb: %x", hex));

	/*Test with %X */
	int	HEX = 2525;
	printf("||Test with HEX||\n\n");
	printf("\nReturn ft:%d\n", ft_printf("ft: %X", HEX));
	printf("\nReturn lb:%d\n\n", printf("lb: %X", HEX));

    /* DIY VS OG with loads of variables */
    // printf("||ft_printf||\n");
    // DIY = ft_printf("%s\n%p\n%d\n%c\n%u\n%x\n%X\n%%%", print_string, print_address, decimal, c, ui, hex, HEX);
    // printf("\nreturn = %d\n", DIY);
    
    // printf("\n||printf||\n");
    // OG = printf("%s\n%p\n%d\n%c\n%u\n%x\n%X\n%%%", print_string, print_address, decimal, c, ui, hex, HEX);
    // printf("\nreturn = %d\n\n", OG);
	
    // printf("||ft_printf||\n");
    // DIY = ft_printf("%p\n", print_string);
    // printf("\nreturn = %d\n", DIY);
    
    // printf("\n||printf||\n");
    // OG = printf("%p\n", print_string);
    // printf("\nreturn = %d\n\n", OG);

	return (0);
}