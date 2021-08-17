/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 22:05:01 by taras             #+#    #+#             */
/*   Updated: 2021/08/17 15:15:45 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = ft_strdup(s);
	if (!dst)
		return (0);
	while (dst[i] != '\0')
	{
		dst[i] = (*f)(i, dst[i]);
		i++;
	}
	return (dst);
}
