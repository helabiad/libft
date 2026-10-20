/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:37:18 by helabiad          #+#    #+#             */
/*   Updated: 2026/10/20 14:00:55 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	size_t	i;
	char	*s_copy;

	s_len = ft_strlen(s);
	s_copy = malloc(s_len + 1);
	if (s_copy == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		s_copy[i] = s[i];
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}
