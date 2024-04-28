/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamakasu <kamakasu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:16:16 by kamakasu          #+#    #+#             */
/*   Updated: 2024/04/18 22:19:47 by kamakasu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*new_dst;
	const unsigned char	*new_src;

	new_dst = (unsigned char *)dst;
	new_src = (const unsigned char *)src;
	if (len == 0 || (dst == NULL && src == NULL))
		return (dst);
	if (new_dst < new_src)
	{
		while (len--)
			*new_dst++ = *new_src++;
	}
	else
	{
		new_dst += len;
		new_src += len;
		while (len--)
			*(--new_dst) = *(--new_src);
	}
	return (dst);
}
