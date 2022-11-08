/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:46:37 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/08 16:45:01 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_put_ui_nbr(unsigned int n);
int	ft_putstr(char *s);
int	ft_puthex(unsigned int n);
int	ft_put_cap_hex(unsigned int n);
int	ft_putadr(unsigned long n);
int	ft_printspecifier(int specifier, va_list args);

#endif
