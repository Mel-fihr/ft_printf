/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 17:58:40 by mel-fihr          #+#    #+#             */
/*   Updated: 2024/01/05 20:17:09 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p_len(size_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_p(size_t num, const char format)
{
	if (num >= 16)
	{
		ft_put_p(num / 16, format);
		ft_put_p(num % 16, format);
	}
	else
	{
		if (format == 'x')
			ft_printf_char("0123456789abcdef"[num]);
		if (format == 'X')
			ft_printf_char("0123456789ABCDEF"[num]);
	}
}

int	ft_print_p(size_t num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_p(num, format);
	return (ft_p_len(num));
}

int	ft_printf_p(size_t num)
{
	int	res;

	res = 0;
	res += write(1, "0x", 2);
	res += ft_print_p(num, 'x');
	return (res);
}
