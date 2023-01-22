/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:09:25 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/22 22:22:05 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_nbr(unsigned int nb)
{
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
		return ;
	}
	if (nb > 9)
		ft_print_unsigned(nb / 10);
	ft_putchar((nb % 10) + 48);
}

int	ft_print_unsigned(unsigned int nb)
{
	unsigned int	i;

	i = 1;
	print_nbr(nb);
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}
