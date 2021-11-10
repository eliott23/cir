/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:48:16 by aababach          #+#    #+#             */
/*   Updated: 2021/11/10 09:48:44 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	src_l;
	size_t	i;

	i = 0;
	src_l = 0;
	while (src[src_l])
		src_l++;
	if (dstsize)
	{
		dstsize--;
		while (dstsize--)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	else
		dst[i] = '\0';
	return (src_l);
}
