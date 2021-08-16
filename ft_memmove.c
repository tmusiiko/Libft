/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taras <taras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 23:31:54 by taras             #+#    #+#             */
/*   Updated: 2021/08/15 13:42:46 by taras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	ptr = dest;
	ptr2 = (void *)src;
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
		i = n;
		while (i > 0)
		{
			ptr[i - 1] = ptr2[i - 1];
			i--;
		}
	}
	return (dest);
}
