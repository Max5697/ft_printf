/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplemyu <thplemyu@student.42bangkok.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:10:14 by thplemyu          #+#    #+#             */
/*   Updated: 2026/01/30 15:31:20 by thplemyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpt(void *ptr)
{
	int	len;

	if (ptr == 0)
		return (ft_putstr("(nil)"));
	len = ft_putstr("0x");
	len += ft_puthex((unsigned long)ptr, "0123456789abcdef");
	return (len);
}
