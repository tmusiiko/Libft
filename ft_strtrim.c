/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:07:50 by taras             #+#    #+#             */
/*   Updated: 2021/08/17 10:29:31 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[j] != '\0')
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

int	ft_end(char const *s1, char const *set)
{
	size_t	j;
	size_t	len;

	j = 0;
	len = ft_strlen(s1) - 1;
	while (set[j] != '\0')
	{
		if (s1[len] == set[j])
		{
			len--;
			j = 0;
		}
		else
			j++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = ft_start (s1, set);
	len = ft_end (s1, set);
	return (ft_substr(s1, i, len - i + 1));
}
