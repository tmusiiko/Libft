/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 23:31:54 by taras             #+#    #+#             */
/*   Updated: 2021/08/20 14:45:43 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	ptr = dest;
	ptr2 = (void *)src;
	if (!ptr && !ptr2)
		return (NULL);
	if (ptr < ptr2)
	{
		i = 0;
		while (i < n)
		{
			ptr[i] = ptr2[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
		{
			ptr[n] = ptr2[n];
		}
	}
	return (dest);
}
