/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taras <taras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:35:43 by taras             #+#    #+#             */
/*   Updated: 2021/08/02 16:27:54 by taras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*src;
	char	*dst;

	i = 0;
	src = (void *)s;
	dst = malloc(len + 1);
	while (i < len)
	{
		dst[i] = src[start + i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
