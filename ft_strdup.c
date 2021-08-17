/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 23:45:25 by taras             #+#    #+#             */
/*   Updated: 2021/08/17 09:44:59 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	char	*src;
	size_t	i;

	i = 0;
	src = (void *)s;
	p = malloc(ft_strlen(src) + 1);
	while (src[i] != 0)
	{
		p[i] = src[i];
		i++;
	}
	p[i] = 0;
	return (p);
}
