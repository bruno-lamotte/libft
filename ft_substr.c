/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blamotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:54:25 by blamotte          #+#    #+#             */
/*   Updated: 2025/11/05 21:10:40 by blamotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *dest;

    if (!s)
	    return (NULL);
    if (ft_strlen(s) < start)
	    len = 0;
    if ((size_t)ft_strlen(s + start) < len)
	    len = ft_strlen(s + start);
    if (!(dest = malloc(sizeof(char *) * len + 1)))
	    return (NULL);
    ft_memmove(dest + start, s, len);
    dest[len + 1] = '\0';
    return (dest);
}
