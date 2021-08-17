/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 23:27:06 by taras             #+#    #+#             */
/*   Updated: 2021/08/17 09:45:23 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*restrict d, const	char *restrict	s, size_t	size)

{
	size_t	i;
	size_t	j;
	size_t	dlen;

	i = 0;
	j = 0;
	dlen = ft_strlen(d);
	if (dlen >= size)
	{
		return (ft_strlen(s) + size);
	}
	while ((s[j] != '\0') && (dlen + i < (size - 1)))
	{
		d[dlen + i] = s[j];
		i++;
		j++;
	}
	d[dlen + i] = '\0';
	return (dlen + ft_strlen(s));
}
