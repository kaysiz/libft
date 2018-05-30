/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 15:00:38 by ksiziva           #+#    #+#             */
/*   Updated: 2018/05/30 16:24:53 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *res;
    size_t  len;

    len = ft_strlen(s1) + ft_strlen(s2);
    res = malloc((len + 1) * sizeof(char));
    if (!res)
        return (NULL);
    ft_strcpy(res, s1);
    ft_strcat(res, s1);
    return (res);
}
