/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:18:50 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/22 21:12:37 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_hex(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static char	*hex_to_str(unsigned int n, char *base)
{
	int		size;
	char	*hex;

	size = count_hex(n);
	hex = (char *)malloc(sizeof(char) * (size + 1));
	if (!hex)
		return (NULL);
	hex[size] = '\0';
	while (size > 0)
	{
		hex[size - 1] = base[n % 16];
		n = n / 16;
		size--;
	}
	return (hex);
}

int	ft_print_hex(unsigned int nbr, char *base)
{
	char	*str;
	int		len;

	str = hex_to_str(nbr, base);
	len = ft_putstr(str);
	free(str);
	return (len);
}
