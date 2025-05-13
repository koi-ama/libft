/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamakasu <kamakasu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 01:01:47 by kamakasu          #+#    #+#             */
/*   Updated: 2025/05/14 01:02:02 by kamakasu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoi(const char *str)
{
	long long	result;
	int			sign;

	result = 0;
	sign = 1;
	if (!str)
		return (0);
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (*str && '0' <= *str && *str <= '9')
	{
		if (ft_isdigit(*str) && ((LONG_MIN + (*str - '0')) / 10 > -result)
			&& (sign < 0))
			return (LONG_MIN);
		else if (ft_isdigit(*str) && ((LONG_MAX - (*str - '0')) / 10 < result)
			&& (sign > 0))
			return (LONG_MAX);
		result = result * 10 + (*str++ - '0');
	}
	return (result * sign);
}
