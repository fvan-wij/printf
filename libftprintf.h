/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvan-wij <fvan-wij@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:46:37 by fvan-wij          #+#    #+#             */
/*   Updated: 2022/11/07 22:58:56 by fvan-wij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <strings.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_put_ui_nbr(unsigned int n);
int	ft_putstr(char *s);
int	ft_puthex(int n);
int	ft_put_cap_hex(int n);
int	ft_putadr(unsigned long n);
int	ft_printspecifier(int specifier, va_list args);

#endif
