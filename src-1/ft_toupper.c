/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:28:22 by ksiziva           #+#    #+#             */
/*   Updated: 2018/05/21 08:28:31 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int ft_upper(int c){
	if(c >= 97 && c <= 122)
	c = c + 32;
	return c;
}