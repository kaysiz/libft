/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 13:59:08 by ksiziva           #+#    #+#             */
/*   Updated: 2018/06/10 14:23:05 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strtok(char * str, const char * delim)
{
	char	*p;
	if (str)
		p = str;
	else if (!p)
		return (0);
	str = p + strspn(p, delim);
	p = str + strcspn(str, delim);
	if (p == str)
		return (NULL);
	if (*p)
	{
		p = NULL;
	}
	else
		p = NULL;
	return (str);
}
int main () {
   char str[80] = "This is - www.tutorialspoint.com - website";
   const char s[2] = "-";
   char *token;

   /* get the first token */
   token = strtok(str, s);

   /* walk through other tokens */
   while( token != NULL ) {
      printf( " %s\n", token );

      token = strtok(NULL, s);
   }

   return(0);

