/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:51:39 by aababach          #+#    #+#             */
/*   Updated: 2021/11/09 18:58:03 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				n;
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	n = 1;
	i = len - 1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < d)
	{
		while (i--)
			d[i] = s[i];
		d[i] = s[i];
	}
	else
	{
		i = 0;
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}
