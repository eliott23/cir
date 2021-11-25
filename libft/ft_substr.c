/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:49:27 by aababach          #+#    #+#             */
/*   Updated: 2021/11/25 13:19:34 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_i;

	s_i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len >= ft_strlen(s))
		substr = malloc(sizeof(char) * (ft_strlen(s) - start) + 1);
	else
		substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	while (s[start] && s_i < len)
	{
		substr[s_i] = s[start];
		s_i++;
		start++;
	}
	substr[s_i] = '\0';
	return (substr);
}
