/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blamotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 22:24:24 by blamotte          #+#    #+#             */
/*   Updated: 2025/11/05 23:20:58 by blamotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	*s++;
    }
    return (count);
}

char	**ft_split(char const *s, char c)
{
    char    **out;
    int	    flag;
    int	    i;

    if (!s || !out = malloc(sizeof(char *) * count_words(s, c) + 1))
	return (NULL);
    flag = -1;
    while (s[i])
    {
	if(s[i] != c && flag < 0)
	    flag = i;
	else if ((s[i] || s[i] == c) && flag >= 0)
	{
	    *out++ = ft_substr(s, flag, i - flag);
	    flag = -1;
	}
	i++;
    }
    *out++ = NULL;
    return (out);
}
