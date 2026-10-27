/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 22:42:46 by helabiad          #+#    #+#             */
/*   Updated: 2026/10/27 15:09:32 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_find_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s1[i] != '\0' && set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static size_t	ft_find_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(s1);
	while (i > 0 && set[j] != '\0')
	{
		if (s1[i - 1] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static size_t	ft_real_length(size_t start, size_t end)
{
	return (end - start);
}

static char	*ft_allocation_and_copy(char const *s1, size_t real_length)
{
	char	*ptr;

	ptr = malloc (real_length + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, real_length + 1);
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	real_length;
	char	*ptr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL || set[0] == '\0')
		return (ft_strdup(s1));
	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	real_length = ft_real_length(start, end);
	ptr = ft_allocation_and_copy(s1 + start, real_length);
	return (ptr);
}
