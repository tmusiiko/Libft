/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 00:23:44 by taras             #+#    #+#             */
/*   Updated: 2021/08/17 09:45:53 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)

{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	if (little[i] == '\0')
		return ((char *)&big[j]);
	while (big[j] != '\0' && j < len)
	{
		while (j < len && little[i] == big[j] && little[i] != '\0')
		{	
			i++;
			j++;
		}
		if (little[i] == '\0')
			return ((char *)&big[j - i]);
		else if (i != 0)
			return (0);
		j++;
	}
	return (0);
}
