/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blamotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:29:06 by blamotte          #+#    #+#             */
/*   Updated: 2025/11/05 20:37:26 by blamotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t nmemb, size_t size);
{
    void *ptr;
    if (!nmemb || !size)
	return (malloc(0));
    if (!ptr = malloc(nmemb * size))
	return (NULL);
    return (ft_bzero(ptr, nmemb * size));
}
