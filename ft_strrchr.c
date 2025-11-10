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

char	*strrchr(const char *s, int c);
{
    size_t  slen;

    if (!s)
	    return (NULL);
    slen = ft_strlen(s);
    while (slen--)
    	if (*s + slen == c)
	        return (*s);
    return (NULL);
}
