#include "libft.h"

int count_digits(int n)
{
    int     len;
    int     tmp;
    
    len = 0;
    if (n <= 0)
        len++;
    tmp = n;
    while (tmp)
    {
        len++;
        tmp /= 10;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    int     len;
    char    *str;
    int     digit;

    len = count_digits(n);
    str = (char *)malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (n < 0)
        str[0] = '-';
    else if (n == 0)
    {
        str[0] = '0';
        return (str);
    }
    len--;
    while(n)
    {
        digit = n % 10;
	if (n < 0)
		digit = -digit;
        str[len--] = '0' + digit;
        n /= 10;
    }
    return (str);
}
