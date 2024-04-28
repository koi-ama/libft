/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamakasu <kamakasu@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:14:47 by kamakasu          #+#    #+#             */
/*   Updated: 2024/04/18 20:14:51 by kamakasu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	unsigned char	*new_dest;

	new_dest = dest;
	while (n--)
		*new_dest++ = 0;
}
