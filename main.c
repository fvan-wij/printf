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
	/* %s */
    char print_string[] = "JOJOJOJOJOJO";

	/* %p */
    char print_address[] = "PRINT MIJN ADDRESS G";

	/* %d || %i */
   	int decimal = 2147483647;

	/* %c */
	char c = 'f';

	/* %u */
	unsigned int ui = 4294967295;

	/* %x */
	int	hex = 2525;

	/* %X */
	int	HEX = 2525;

	/* Return values */
    int DIY;
    int OG;
    
    /* DIY VS OG with loads of variables */
    printf("||ft_printf||\n");
    DIY = ft_printf("%s\n%p\n%d\n%c\n%u\n%x\n%X\n%%%", print_string, print_address, decimal, c, ui, hex, HEX);
    printf("\nreturn = %d\n", DIY);
    
    printf("\n||printf||\n");
    OG = printf("%s\n%p\n%d\n%c\n%u\n%x\n%X\n%%%", print_string, print_address, decimal, c, ui, hex, HEX);
    printf("\nreturn = %d\n\n", OG);
	
    // printf("||ft_printf||\n");
    // DIY = ft_printf("%p\n", print_string);
    // printf("\nreturn = %d\n", DIY);
    
    // printf("\n||printf||\n");
    // OG = printf("%p\n", print_string);
    // printf("\nreturn = %d\n\n", OG);


	// //DIY VS OG
	// printf("||ft_printf||\n");
    // DIY = ft_printf("sdfadf%%%%");
    // printf("\nreturn = %d\n", DIY);
    
    // printf("\n||printf||\n");
    // OG = printf("sdfadf%%%%");
    // printf("\nreturn = %d\n\n", OG);

	return (0);
}