/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 05:59:12 by helabiad          #+#    #+#             */
/*   Updated: 2026/10/27 16:29:02 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_how_many_digit(long int n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	ft_int_to_char(long int n)
{
	return (n + '0');
}

static char	*ft_negative_number(int n)
{
	long	nb;
	size_t	i;
	char	*ptr;

	nb = (long)n;
	nb = -nb;
	i = ft_how_many_digit(nb) + 1;
	ptr = malloc (i + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[i] = '\0';
	i--;
	while (i > 0)
	{
		ptr[i] = ft_int_to_char(nb % 10);
		nb = nb / 10;
		i--;
	}
	ptr[i] = '-';
	return (ptr);
}

static char	*ft_positive_number(int n)
{
	int		nb;
	size_t	i;
	char	*ptr;

	i = ft_how_many_digit(n);
	nb = n;
	ptr = malloc (i + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[i] = '\0';
	i--;
	while (i > 0)
	{
		ptr[i] = ft_int_to_char(nb % 10);
		nb = nb / 10;
		i--;
	}
	ptr[i] = nb % 10 + '0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;

	if (n == 0)
	{
		ptr = malloc(2);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	if (n < 0)
		ptr = ft_negative_number(n);
	else
		ptr = ft_positive_number(n);
	return (ptr);
}
