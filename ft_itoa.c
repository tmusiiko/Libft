/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taras <taras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 15:37:44 by taras             #+#    #+#             */
/*   Updated: 2021/08/02 15:56:46 by taras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

int	int_len (int n)
{
	int	len;
	int	n1;

	n1 = n;
	len = 0;
	if (n1 == 0)
		return (1);
	while (n1 != 0)
	{
		n1 = n1 / 10;
		len++;
	}
	if (n < 0)
	{
		len = len + 1;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = int_len(n);
	str = malloc(int_len(n) + 1);
	while (n != 0)
	{
		if (n < 0)
		{
			str[0] = '-';
			n = n * -1;
		}
		str[len - 1 - i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	str[len] = '\0';
	return (str);
}
