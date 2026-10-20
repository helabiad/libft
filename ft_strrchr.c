/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:54:50 by helabiad          #+#    #+#             */
/*   Updated: 2026/10/19 17:11:42 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t				s_len;
	const unsigned char	*ptr_s;
	unsigned char		target;

	s_len = ft_strlen(s);
	ptr_s = (const unsigned char *)s;
	target = (unsigned char)c;
	while (s_len > 0)
	{
		if (ptr_s[s_len] == target)
			return ((char *)(ptr_s + s_len));
		s_len--;
	}
	if (ptr_s[s_len] == target)
		return ((char *)(ptr_s + s_len));
	return (NULL);
}
