/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 15:58:23 by ppatil            #+#    #+#             */
/*   Updated: 2016/09/25 15:58:23 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_memory.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (s && *s)
	{
		if (*s != c)
		{
			++count;
			s = ft_strchr(s, c);
		}
		else
			++s;
	}
	return (count);
}

char			**ft_strsplit(const char *s, char c)
{
	size_t	current_word;
	size_t	word_count;
	char	**words;
	char	*next;

	word_count = ft_count_words(s, c);
	words = (char **)ft_memalloc(sizeof(char*) * (word_count + 1));
	if (!words)
		return (NULL);
	current_word = 0;
	while (current_word < word_count)
	{
		while (*s == c)
			++s;
		next = ft_strchr(s, c);
		if (next)
			words[current_word] = ft_strsub(s, 0, next - s);
		else
			words[current_word] = ft_strdup(s);
		s = next;
		++current_word;
	}
	return (words);
}
