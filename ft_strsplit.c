/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 12:10:35 by ksiziva           #+#    #+#             */
/*   Updated: 2018/06/11 17:00:33 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *s, char d)
{
	int	i;
	int	count;
	int	len;
	char lastC;

	len = ft_strlen(s);
	count = 0;
	i = 0;
	if (len > 0)
		lastC = s[0];
	while (i <= len)
	{
		if (s[i] == d || s[i] == '\0' || lastC != d)
		{
			count++;
		}
		lastC = s[i];
		i++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{

}
