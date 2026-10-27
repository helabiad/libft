/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helabiad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:40:37 by helabiad          #+#    #+#             */
/*   Updated: 2026/10/27 14:17:37 by helabiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_words_in_string(char const *s, char delimiter_char)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != delimiter_char)
			words++;
		else if (s[i] != delimiter_char && s[i - 1] == delimiter_char)
			words++;
		i++;
	}
	return (words);
}

static size_t	ft_find_start(char const *s, char delimiter_char)
{
	size_t	start;

	start = 0;
	while (s[start] != '\0' && s[start] == delimiter_char)
		start++;
	return (start);
}

static size_t	ft_find_end(char const *s, char delimiter_char)
{
	size_t	end;

	end = 0;
	while (s[end] != '\0')
	{
		if (s[end] == delimiter_char)
			break ;
		end++;
	}
	return (end);
}

static char	**ft_fill_array(char **ptr, char const *s_ptr, char c, size_t words)
{
	size_t		end;
	size_t		i;

	i = 0;
	while (i < words)
	{
		s_ptr += ft_find_start(s_ptr, c);
		end = ft_find_end(s_ptr, c);
		ptr[i] = ft_substr(s_ptr, 0, end);
		if (ptr[i] == NULL)
		{
			while (i > 0)
			{
				free(ptr[i - 1]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
		s_ptr = s_ptr + end;
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char			**ptr;
	const char		*s_ptr;
	size_t			words;

	if (s == NULL)
		return (NULL);
	words = ft_words_in_string(s, c);
	ptr = malloc ((words + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	s_ptr = s;
	ptr = ft_fill_array(ptr, s_ptr, c, words);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
