/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taras <taras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:31:11 by taras             #+#    #+#             */
/*   Updated: 2021/08/15 14:43:23 by taras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	size_t	i;
	char	*src1;
	char	*src2;
	char	*dst;

	i = 0;
	src1 = (void *)s1;
	src2 = (void *)s2;
	dst = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (src1[i] != '\0')
	{
		dst[i] = src1[i];
		i++;
	}
	i = 0;
	while (src2[i] != '\0')
	{
		dst[ft_strlen(src1) + i] = src2[i];
		i++;
	}
	dst[ft_strlen(src1) + i] = '\0';
	return (dst);
}
