/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaraban <akaraban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:04:01 by akaraban          #+#    #+#             */
/*   Updated: 2023/01/22 21:13:35 by akaraban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//locate first occurence of character in string

char	*ft_strchr(char const *s, int c)
{	
	while (*s != (unsigned char) c)
	{
		if (!*s++)
			return (NULL);
	}
	return ((char *)s);
}
