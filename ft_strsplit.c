/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 12:10:35 by ksiziva           #+#    #+#             */
/*   Updated: 2018/06/14 16:24:14 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char d)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == d && s[i] != '\0')
			i++;
		if (s[i] != d && s[i] != '\0')
			count++;
		while (s[i] != d && s[i] != '\0')
			i++;
		
	}
	return (count);
}

char	**ft_strsplit(char const *s, char d)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char **res;

	i = 0;
	j = 0;
	res = (char **)malloc(sizeof(char *) * (count_words((char *)s, d) + 1));
	if (res == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == d)
			i++;
		k = i;
		while (s[i] && s[i] != d)
			i++;
		if (i > j)
		{
			res[j] = ft_strndup(s + j, i - j);
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}
