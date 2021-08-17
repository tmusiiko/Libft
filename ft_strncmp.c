/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:59:22 by taras             #+#    #+#             */
/*   Updated: 2021/08/17 17:53:15 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if ((s1[i] == '\0') && (s2[i] != '\0') && (i < n))
	{
		return (-1);
	}
	else if ((s1[i] != '\0') && (s2[i] == '\0') && (i < n))
	{
		return (1);
	}
	return (0);
}
