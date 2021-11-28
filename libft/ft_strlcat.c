/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:58:10 by aababach          #+#    #+#             */
/*   Updated: 2021/11/28 18:11:06 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	return_value;
	size_t	s_i;
	size_t	s_l;
	size_t	d_l;

	s_i = 0;
	s_l = ft_strlen(src);
	d_l = ft_strlen(dst);
	if (dstsize <= d_l)
		return (s_l + dstsize);
	return_value = s_l + d_l;
	if (dstsize)
	{
		while (d_l < (dstsize - 1) && src[s_i])
		{
			dst[d_l] = src[s_i];
			s_i++;
			d_l++;
		}
		dst[d_l] = '\0';
	}
	return (return_value);
}
