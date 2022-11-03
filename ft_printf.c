/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:41:49 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/03 23:24:11 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
    //char s[] = "JOJOJOJOJOJO";
    int DIY;
    int OG;
   	unsigned int max_int = 2147483647;
    
    printf("||ft_printf||\n");
    DIY = ft_printf("%u", max_int);
    printf("\nreturn = %d\n", DIY);
    
    printf("\n||printf||\n");
    OG = printf("%u", max_int);
    printf("\nreturn = %d\n\n", OG);

}

int    ft_printf(const char *s, ...)
{
    int i;
    int spec_count;
    char *b;
    va_list args;
    char *str;
    
    b = (char *) s;
    i = 0;
    spec_count = 0;
    va_start(args, s);
    while (b[i])
    {
        if (ft_isdecimal(b, i))
        {
            ft_putnbr_fd(va_arg(args, int), 1);
            spec_count++;
            i++;
        }
        else if(ft_isui(b, i))
        {
            unsigned int n = va_arg(args, int);
            ft_put_ui_nbr_fd(n, 1);
            spec_count++;
            i++;
        }
        else if (ft_ischar(b, i))
        {
            ft_putchar_fd(va_arg(args, int), 1);
            spec_count++;
            i++;
        }
        else if (ft_isstring(b, i))
        {
            str = va_arg(args, char *);
            ft_putstr_fd(str, 1);
            spec_count++;
            i++;
        }
        else if (ft_isprint(b[i]) || ft_iswhitespace(b[i]))
        {
            ft_putchar_fd(b[i], 1);
        }
		else if (ft_ispercent(b, i))
		{
			ft_putchar_fd('%', 1);
			i++;
		}
        i++;
    }
    va_end(args);
    return (i);
}

