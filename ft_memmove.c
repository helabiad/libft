/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:59:27 by helabiad          #+#    #+#             */
/*   Updated: 2026/10/19 13:31:29 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				index;
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	if (n == 0 || dst == src)
		return (dst);
	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	if (dst_ptr < src_ptr)
	{
		ft_memcpy(dst, src, n);
		return (dst);
	}
	index = n;
	while (index > 0)
	{
		dst_ptr[index - 1] = src_ptr[index - 1];
		index--;
	}
	return (dst);
}
