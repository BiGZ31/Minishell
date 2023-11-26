/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumontgo  <lumontgo@student.42perpig>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:40:28 by lumontgo          #+#    #+#             */
/*   Updated: 2023/02/15 10:43:30 by lumontgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(char const *s, char c)
{
	int	words;
	int	check;

	words = 0;
	check = 0;
	while (*s)
	{
		if (*s == c)
			check = 0;
		else if (check == 0)
		{
			check = 1;
			words++;
		}
		s++;
	}
	return (words);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_filltab(char const *s, char c, char **tab, int allwords)
{
	int	word;
	int	word_char;
	int	word_len;

	word = 0;
	while (word < allwords)
	{
		while (*s == c)
			s++;
		word_len = ft_wordlen(s, c);
		tab[word] = (char *)malloc(sizeof(**tab) * (word_len + 1));
		if (tab[word] == NULL)
			return (NULL);
		word_char = 0;
		while (word_char < word_len)
		{
			tab[word][word_char] = *s;
			word_char++;
			s++;
		}
		tab[word][word_char] = '\0';
		word++;
	}
	tab[word] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		allwords;

	if (s == NULL)
		return (NULL);
	allwords = ft_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (allwords + 1));
	if (tab == NULL)
		return (NULL);
	tab = ft_filltab(s, c, tab, allwords);
	return (tab);
}
