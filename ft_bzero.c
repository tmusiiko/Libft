/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 15:01:13 by taras             #+#    #+#             */
/*   Updated: 2021/08/17 09:48:07 by tmusiiko         ###   ########.fr       */
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