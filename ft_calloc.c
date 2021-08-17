/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 14:13:22 by taras             #+#    #+#             */
/*   Updated: 2021/08/17 18:22:12 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t num, size_t size)
{
	char	*p;

	p = malloc(num * size);
	if (!p)
		return (0);
	ft_bzero(p, num * size);
	return (p);
}
