/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 23:34:27 by taras             #+#    #+#             */
/*   Updated: 2021/08/17 16:31:17 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (void *)dest;
	ptr2 = (void *)src;
	if (!ptr1 && !ptr2)
		return (NULL);
	while (i < n)
	{
		(ptr1[i] = ptr2[i]);
		i++;
	}
	return (dest);
}
