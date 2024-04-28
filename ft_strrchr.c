/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamakasu <kamakasu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:50:34 by kamakasu          #+#    #+#             */
/*   Updated: 2024/04/20 17:04:48 by kamakasu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (len != 0)
	{
		while (len > 0)
		{
			if (s[len] == (char)c)
				return ((char *)&s[len]);
			len--;
		}
	}
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (NULL);
}
