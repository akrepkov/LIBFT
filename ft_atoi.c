/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:03:38 by akrepkov          #+#    #+#             */
/*   Updated: 2022/10/27 13:22:47 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	long long	num;
	int			negative;

	i = 0;
	num = 0;
	negative = 1;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		|| nptr[i] == '\v' || nptr[i] == '\r' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			negative *= -1;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
	{
		num = num * 10 + nptr[i] - '0';
		i++;
	}
	return (num * negative);
}
/*
int main(void)
{
	char nptr[] = "--123";
	printf ("%d\n", ft_atoi(nptr));
	printf ("%d\n", atoi(nptr));
}
*/