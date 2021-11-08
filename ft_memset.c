/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:36:56 by aababach          #+#    #+#             */
/*   Updated: 2021/11/08 10:57:01 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = (unsigned char *)b;
	while (len)
	{
		*a = c;
		a++;
		len--;
	}
	return (b);
}
