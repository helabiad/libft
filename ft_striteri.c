/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 22:31:42 by helabiad          #+#    #+#             */
/*   Updated: 2026/10/29 17:37:40 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	s_length;
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	if (s != NULL)
	{
		s_length = ft_strlen(s);
		i = 0;
		while (i < s_length)
		{
			f((unsigned int)i, &s[i]);
			i++;
		}
	}
}
