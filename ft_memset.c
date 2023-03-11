/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrepkov <akrepkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:32:47 by akrepkov          #+#    #+#             */
/*   Updated: 2022/11/11 14:51:38 by akrepkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char	*p;

	p = str;
	while (n != 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (str);
}

// int main (void)
// {
//     char str[] = "123467891011";
//     ft_memset (str+2, '5', 3);
//     printf("%s", str);

// }