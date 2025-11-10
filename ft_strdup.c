/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blamotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:37:50 by blamotte          #+#    #+#             */
/*   Updated: 2025/11/05 21:12:01 by blamotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*strdup(const char *s);
{
    char    *dest;

    if (!s)
	    return (NULL);
    if (!dest(malloc(sizeof(*dest) * ft_strlen(s) + 1)))
	    return (NULL);
    ft_memmove(dest, s, ft_strlen(s));
    dest[ft_strlen(s) + 1] = '\0';
    return (dest);
}

