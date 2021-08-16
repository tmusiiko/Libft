/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taras <taras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 14:13:22 by taras             #+#    #+#             */
/*   Updated: 2021/07/04 16:02:12 by taras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc (size_t num, size_t size)
{
	char	*p;

	p = malloc(num * size);
	ft_bzero(p, num * size);
	return (p);
}
