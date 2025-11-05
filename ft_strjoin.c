/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blamotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 21:13:40 by blamotte          #+#    #+#             */
/*   Updated: 2025/11/05 21:20:49 by blamotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2);
{
    char    *dst;

    if (!s1 || !s2)
	return (NULL);
    if (!dst = malloc(sizeof(*dest) * (ft_strlen(s1) + ft_strlen(s2) + 1))
	return (NULL);
    ft_memmove(dst, s1, ft_strlen(s1));
    ft_memmove(dst + ft_strlen(s1), s2, ft_strlen(s2));
    dst[ft_strlen(s1) + ft_strlen(s2) + 1] = '\0';
    return (dst);
}
