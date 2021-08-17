/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 15:37:44 by taras             #+#    #+#             */
/*   Updated: 2021/08/17 17:12:36 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	int_len(int n)
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

char	*ft_count(char *s, int n, int len)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		if (n < 0)
		{
			s[0] = '-';
			n = n * -1;
		}
		s[len - 1 - i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = int_len(n);
	str = malloc(int_len(n) + 1);
	if (!str)
		return (0);
	str = ft_count(str, n, len);
	str[len] = '\0';
	return (str);
}
