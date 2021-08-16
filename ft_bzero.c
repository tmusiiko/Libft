/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taras <taras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 15:01:13 by taras             #+#    #+#             */
/*   Updated: 2021/05/29 15:09:34 by taras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *str, size_t n)

{
	size_t	i;

	i = 0;
	if (*(unsigned char *)(str + i) == '\0')
	{
		return (0);
	}
	while (i < n)
	{
		*(unsigned char *)(str + i) = '\0';
		i++;
	}
	return (str);
}
