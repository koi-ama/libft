/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamakasu <kamakasu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:39:43 by kamakasu          #+#    #+#             */
/*   Updated: 2024/06/23 18:04:26 by kamakasu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	result;
	int		sign;

	result = 0;
	sign = 1;
	if (!str)
		return (0);
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && '0' <= *str && *str <= '9')
	{
		if (ft_isdigit(*str) && ((LONG_MIN + (*str - '0')) / 10 > -result)
			&& (sign < 0))
			return ((int)LONG_MIN);
		else if (ft_isdigit(*str) && ((LONG_MAX - (*str - '0')) / 10 < result)
			&& (sign > 0))
			return ((int)LONG_MAX);
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
