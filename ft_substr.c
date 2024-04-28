/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamakasu <kamakasu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:23:40 by kamakasu          #+#    #+#             */
/*   Updated: 2024/04/20 17:51:27 by kamakasu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;
	size_t	alloc_len;

	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if (str_len < start)
		return (ft_strdup(""));
	if (str_len - start < len)
		alloc_len = str_len - start;
	else
		alloc_len = len;
	substr = (char *)malloc(alloc_len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, alloc_len + 1);
	return (substr);
}
