/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 20:38:48 by helabiad          #+#    #+#             */
/*   Updated: 2026/10/20 21:31:31 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	real_len;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
	{
		ptr = ft_strdup("");
		return (ptr);
	}
	if (s_len - start > len)
		real_len = len;
	else
		real_len = s_len - start;
	ptr = malloc(real_len + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s + start, real_len + 1);
	return (ptr);
}
