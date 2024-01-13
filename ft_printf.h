/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:08:22 by mel-fihr          #+#    #+#             */
/*   Updated: 2024/01/05 20:26:34 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf_char(int i);
int		ft_printf_str(char *str);
int		ft_hex_len(unsigned	int num);
void	ft_put_hex(unsigned int num, const char format);
int		argtype(va_list arg, char c);
int		ft_printf(const char *str, ...);
int		ft_print_hex(unsigned int num, const char format);
int		ft_putnbr(int num);
int		ft_printf_unsigned(unsigned int num);
int		ft_printf_p(size_t num);
int		ft_p_len(size_t num);
void	ft_put_p(size_t num, const char format);
int		ft_print_p(size_t num, const char format);

#endif