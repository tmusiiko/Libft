/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmusiiko <tmusiiko@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 23:27:06 by taras             #+#    #+#             */
/*   Updated: 2021/08/21 13:54:30 by tmusiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	digit;
	int	neg;

	digit = 0;
	i = 0;
	neg = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if ((str[0] == '-') || (str[0] == '+'))
	{
		if (str[i] == '-')
		{
			neg = -1;
		}
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		digit = digit * 10 + str[i] - '0';
		i++;
	}
	return (digit * neg);
}
