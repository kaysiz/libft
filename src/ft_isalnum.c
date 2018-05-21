/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:17:06 by ksiziva           #+#    #+#             */
/*   Updated: 2018/05/21 11:23:52 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c);

int ft_islower(int arg)
{
    if (!(arg >= 65 && arg <= 90))
        return (0);
    else
        return (1);
}

int ft_isupper(int arg)
{
    if (!(arg >= 97 && arg <= 122))
        return (0);
    else
        return (1);
}

int ft_isalpha(int c)
{
    if (ft_isupper(c) > 0 || ft_islower(c) > 0)
        return (c);
    else
        return (0);
}

int ft_isdigit(int c)
{
    if (!(c >= 0 && c <= 9))
        return (0);
    else
        return (1);
}

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) > 0 || ft_isalpha(c) > 0)
		return (1);
	else
		return (0);
}
