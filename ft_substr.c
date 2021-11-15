/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:49:27 by aababach          #+#    #+#             */
/*   Updated: 2021/11/15 15:45:00 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	u_l;
	size_t	s_i;

	u_l = (size_t)start;
	s_i = 0;
	if (len == 0 || start >= ft_strlen(s) || s == NULL)
		return (0);
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (0);
	while (s[u_l] && u_l - (size_t)start < len)
	{
		substr[s_i] = s[u_l];
		s_i++;
		u_l++;
	}
	substr[s_i] = '\0';
	return (substr);
}
