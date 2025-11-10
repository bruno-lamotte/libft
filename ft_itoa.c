/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blamotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:02:33 by blamotte          #+#    #+#             */
/*   Updated: 2025/11/10 17:59:25 by blamotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
    long int	nb;
    int		size;
    size_t	len;
    int		*out;

    nb = n;
    len = 2;
    sign = 1;
    if (nb < 0)
    {
	    sign *= -1;
	    nb = -nb;
	    out[0] = '-';
	    len++;
    }
    while (nb / 10)
	    len++;
    if (!malloc(sizeof(char *)len))
	    return (NULL);
    out[len--] = '\0';
    while (nb / 10)
	    out[len--] = nb % 10;
    return (out);
}
