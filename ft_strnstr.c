/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blamotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:48:25 by blamotte          #+#    #+#             */
/*   Updated: 2025/11/05 21:59:27 by blamotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *big, const char *little, size_t len)
{
    int	i;

    if (!little)
		return (big);
    while (*big++ && len--)
    {
		i = 0;
		while (little[i++])
	    	if (little[i] != *big + i)
				break;
		if (!little[i])
	    	return (*big);
    }
    return (NULL);
}
