/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:46:44 by helabiad          #+#    #+#             */
/*   Updated: 2026/10/19 15:35:11 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr_s;
	unsigned char		target;

	if (n == 0)
		return (NULL);
	i = 0;
	ptr_s = (const unsigned char *)s;
	target = (unsigned char)c;
	while (i < n)
	{
		if (ptr_s[i] == target)
			return ((void *)(ptr_s + i));
		i++;
	}
	return (NULL);
}
