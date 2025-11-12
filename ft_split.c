/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blamotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 22:24:24 by blamotte          #+#    #+#             */
/*   Updated: 2025/11/10 18:05:58 by blamotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int count_words(char *s, char c)
{
    int	flag;
    int count;

    count = 0;
    flag = 0;
    while (*s)
    {
		if (*s != c && flag == 0)
		{
	    	flag = 1;
	    	count++;
		}
		else if (*s == c)
	    	flag = 0;
		s++;
    }
    return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		flag;
	int		i;
	int		j;

	if (!s || !(out = malloc(sizeof(char *) * (count_words((char *)s, c) + 1))))
		return (NULL);
	flag = -1;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && flag < 0)
			flag = i;
		else if ((s[i] == c || s[i + 1] == '\0') && flag >= 0)
		{
			if (!(out[j++] = ft_substr(s, flag, i - flag + (s[i + 1] == '\0' && s[i] != c))))
				while (--j >= 0)
					free(out[j]);
			flag = -1;
		}
		i++;
	}
	out[j] = NULL;
	return (out);
}
