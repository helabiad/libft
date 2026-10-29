/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 21:30:22 by helabiad          #+#    #+#             */
/*   Updated: 2026/10/29 20:56:29 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_length;
	size_t	i;
	char	*ptr;

	if (s == NULL || f == NULL)
		return (NULL);
	s_length = ft_strlen(s);
	ptr = malloc (s_length + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < s_length)
	{
		ptr[i] = f((unsigned int)i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
