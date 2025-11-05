/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blamotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 21:44:40 by blamotte          #+#    #+#             */
/*   Updated: 2025/11/05 22:17:16 by blamotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set);
{
    char    *out;
    int	    i;

    if (!s1)
	return (NULL);
    if (!set)
	return (s1);
    while (*s1++)
    {
	i = 0;
	while (set[i++])
	    if (*s1 == set[i])
		break ;
	if (set[i])
	   *out++ = *s1;
    }
    return (out);
}
