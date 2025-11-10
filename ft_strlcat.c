/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blamotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 21:00:41 by blamotte          #+#    #+#             */
/*   Updated: 2025/11/04 21:37:00 by blamotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcat(char * dst, const char * src, size_t size)
{
	size_t	srclen;
	size_t	srcdst;

	if (!src || !dest)
		return (0);
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	ft_memcpy(dst + dstlen, src, size - 1 - dstlen);
	if (size <= ft_strlen(dst))
		return (srclen + deslen);
	dst[dstlen] = NULL;
	return (srclen + size);
}
