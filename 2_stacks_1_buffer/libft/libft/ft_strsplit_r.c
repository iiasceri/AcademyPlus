/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_r.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 14:17:17 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/26 15:57:45 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_get_word_len(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s++)
		len++;
	return (len);
}

static	int		ft_count_words(const char *s, char c, int nr_words, size_t i)
{
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
		i++;
	nr_words++;
	if (i < ft_strlen(s))
		ft_count_words(s, c, nr_words, i);
	else
		return (--nr_words);
	return (0);
}

char			**ft_strsplit_r(char const *s, char c)
{
	char	**words;
	int		i;
	int		j;
	int		k;

	if (!s || !(words = (char **)malloc(sizeof(*words) *
		ft_count_words(s, c, 0, 0) + 1)))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_count_words(s, c, 0, 0))
	{
		if (!(words[i] = ft_strnew(ft_get_word_len(&s[j], c))))
			return (NULL);
		while (s[j] == c && s[j])
			j++;
		k = 0;
		while (s[j] != c && s[j])
			words[i][k++] = s[j++];
		words[i][k] = 0;
	}
	words[i] = 0;
	return (words);
}
