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

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if ((size_t)ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	ft_memmove(dest, s + start, len);
	dest[len] = '\0';
	return (dest);
}
