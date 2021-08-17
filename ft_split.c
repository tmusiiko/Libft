/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 00:03:55 by taras             #+#    #+#             */
/*   Updated: 2021/08/17 09:33:28 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i] != c && s[i] != '\0')
		{
			count++;
		}
		while (s[i] != c && s[i] != '\0')
		{
			i++;
		}
	}
	return (count);
}

int	ft_word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{	
	int		strings;
	int		i;
	int		j;
	char	**array;

	i = 0;
	j = 0;
	if (s == 0)
		return (NULL);
	strings = ft_count_words (s, c);
	array = malloc ((strings + 1) * sizeof (char *));
	while (i < strings)
	{
		while (*s == c && *s != 0)
		{
			s++;
			j++;
		}
		array[i] = ft_substr(s, 0, ft_word_len(s, c));
		s = s + ft_word_len(s, c);
		i++;
	}
	array[i] = 0;
	return (array);
}
