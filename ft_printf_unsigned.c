/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-fihr <mel-fihr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:01:53 by mel-fihr          #+#    #+#             */
/*   Updated: 2024/01/05 20:18:47 by mel-fihr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned(unsigned int num)
{
	int	res;

	res = 0;
	if (num > 9)
	{
		res += ft_printf_unsigned(num / 10);
		res += ft_printf_unsigned(num % 10);
	}
	if (num <= 9)
		res += ft_printf_char(num + 48);
	return (res);
}
