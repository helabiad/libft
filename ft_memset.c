/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 08:50:33 by helabiad          #+#    #+#             */
/*   Updated: 2026/10/19 09:08:26 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*s_ptr;

	if (n == 0)
		return (s);
	index = 0;
	s_ptr = (unsigned char *)s;
	while (index < n)
	{
		s_ptr[index] = (unsigned char)c;
		index++;
	}
	return (s);
}
