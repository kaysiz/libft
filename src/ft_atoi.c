/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksiziva <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:39:15 by ksiziva           #+#    #+#             */
/*   Updated: 2018/05/24 11:18:52 by ksiziva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_isdigit(int c);

int	ft_atoi(const char *str)
{

	if (*str == '\0')
		return (0);

	int result;
	int i;
	int sign;

	result = 0;
	i = 0;
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i] == 0))
				return (0);
		result = (result * 10) + str[i] - '0';
	}
	return (result * sign);
}

int main()
{
    char str[] = "-134";
    int val = ft_atoi(str);
    printf("%d ", val);
    return (0);
}
