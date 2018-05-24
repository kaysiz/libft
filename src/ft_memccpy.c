/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaysiz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 02:40:14 by kaysiz            #+#    #+#             */
/*   Updated: 2018/05/24 03:00:12 by kaysiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t  i;
        char    *d;
        char    *s;

        i = 0;
        d = (char *)dest;
        s = (char *)src;
        while (i < n)
        {
                d[i] = s[i];
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)dest + i + 1);
                i++;
        }
        return(NULL);	
}
