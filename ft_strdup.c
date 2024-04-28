/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamakasu <kamakasu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:29:49 by kamakasu          #+#    #+#             */
/*   Updated: 2024/04/20 17:46:13 by kamakasu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*new_s;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s) + 1;
	new_s = malloc(len);
	if (new_s == NULL)
		return (NULL);
	ft_memcpy(new_s, s, len);
	return (new_s);
}
