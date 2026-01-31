/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplemyu <thplemyu@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:05:28 by thplemyu          #+#    #+#             */
/*   Updated: 2026/01/30 14:05:48 by thplemyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long num, char *base)
{
	int	len;

	len = 0;
	if (num >= 16)
		len += ft_puthex(num / 16, base);
	len += ft_putchar(base[num % 16]);
	return (len);
}
