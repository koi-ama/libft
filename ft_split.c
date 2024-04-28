/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamakasu <kamakasu@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 02:00:40 by kamakasu          #+#    #+#             */
/*   Updated: 2024/04/23 01:42:51 by kamakasu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	count_words(const char *s, char c)
{
	size_t	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			word_count++;
			while (*s != c && *s)
				s++;
		}
	}
	return (word_count);
}

char	*my_strndup(const char *word_start, size_t len)
{
	char	*new_s;

	new_s = (char *)malloc(len + 1);
	if (!new_s)
		return (NULL);
	new_s[len] = '\0';
	return (ft_memcpy(new_s, word_start, len));
}

char	*malloc_word(const char **s, char c)
{
	const char	*word_start;
	size_t		len;

	while (**s == c && **s)
		(*s)++;
	word_start = *s;
	while (**s != c && **s)
		(*s)++;
	len = *s - word_start;
	return (my_strndup(word_start, len));
}

char	**ft_split(char const *s, char c)
{
	char	**container;
	size_t	word_count;
	size_t	word_idx;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	container = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!container)
		return (NULL);
	word_idx = 0;
	while (s && word_idx < word_count)
	{
		container[word_idx] = malloc_word(&s, c);
		if (!container[word_idx])
		{
			while (word_idx--)
				free(container[word_idx]);
			free(container);
			return (NULL);
		}
		word_idx++;
	}
	container[word_idx] = NULL;
	return (container);
}
