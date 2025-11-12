/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blamotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:54:33 by blamotte          #+#    #+#             */
/*   Updated: 2025/11/05 16:12:58 by blamotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int  slen;

    if (!s)
	    return (NULL);
    slen = ft_strlen(s);
    while (slen--)
    	if (*s + slen == c)
	        return ((char *)s);
    return (NULL);
}
