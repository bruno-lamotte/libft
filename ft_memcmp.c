/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blamotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:43:49 by blamotte          #+#    #+#             */
/*   Updated: 2025/11/05 16:46:56 by blamotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int memcmp(const void *s1, const void *s2, size_t n);
{
    if (!s1 && !s2)
		return (0);
    while (n--)
    {
		if (*s1 != *s2)
	   		return (*(unsigned char)s1 - *(unsigned char)s2);
		if (!s1)
	    	break;
		*s1++;
		*s2++;
    }	
    return (0);

}
