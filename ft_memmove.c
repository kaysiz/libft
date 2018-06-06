/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:00:40 by ksiziva           #+#    #+#             */
/*   Updated: 2018/06/06 16:18:41 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	
	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dest;
	if (s2 > s1)
		ft_memcpy(s2, s1, n);
	else
	{
		while (n > 0)
		{
			s2[n-1] = s2[n-1];
			n--;
		}
	}
	return (dest);
}
