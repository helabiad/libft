/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:35:16 by helabiad          #+#    #+#             */
/*   Updated: 2026/10/19 17:11:24 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t					i;
	unsigned char			target;
	const unsigned char		*ptr_s;

	ptr_s = (const unsigned char *)s;
	target = (unsigned char)c;
	i = 0;
	while (ptr_s[i] != '\0')
	{
		if (ptr_s[i] == target)
			return ((char *)(ptr_s + i));
		i++;
	}
	if (ptr_s[i] == target)
		return ((char *)(ptr_s + i));
	return (NULL);
}
