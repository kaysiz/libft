/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:29:09 by ksiziva           #+#    #+#             */
/*   Updated: 2018/05/21 10:12:02 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int arg)
{
	if (arg >= 65 && arg <= 90)
		return (arg);
	else
		return (0);
}

int	ft_isupper(int arg)
{
	if (arg >= 97 && arg <= 122)
		return (arg);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c) > 0 || ft_islower(c) > 0)
		return (c);
	else
		return (0);
}
