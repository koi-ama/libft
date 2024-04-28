/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamakasu <kamakasu@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:45:40 by kamakasu          #+#    #+#             */
/*   Updated: 2024/04/24 14:40:43 by kamakasu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_num_length(int n) {
    int length = 0;
    if (n <= 0) {
        length = 1;
    }
    while (n != 0) {
        n /= 10;
        length++;
    }
    return length;
}

char	*ft_itoa(int n) {
    int length;
    char *str;

    if (!n)
	    return (NULL);
    length = get_num_length(n);
    str  = (char *)malloc(length + 1);
    if (str == NULL)
	    return (NULL);
    str[length] = '\0';
    int is_negative = 0;
    if (n < 0) {
        is_negative = 1;
    }

    if (n == 0) {
        str[0] = '0';
    } else {
        if (n == -2147483648) {
            str[--length] = '8';
            n /= 10;
        }
        if (is_negative && n != 0) {
            n = -n;
        }
        while (n != 0) {
            str[--length] = (n % 10) + '0';
            n /= 10;
        }
        if (is_negative) {
            str[0] = '-';
        }
    }
    return str;
}
