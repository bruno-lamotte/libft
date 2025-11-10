/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blamotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:10:58 by blamotte          #+#    #+#             */
/*   Updated: 2025/11/05 16:00:32 by blamotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n);
{
    if (!dest || !src)
	    return ;
    while (n--)
    {
	    if (dst < src)
	        *(unsigned char *)dst++ = *(const unsigned char *)src++;
	    else
	        *(unsigned char *)dst + n = *(const unsigned char *)src + n;
    }
    return (dst);
}
