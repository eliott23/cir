/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:35:50 by aababach          #+#    #+#             */
/*   Updated: 2021/11/11 16:10:25 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		ps("it went here\n");
		ps("this is i ");
		pi(i);
		ps("\n");
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

int	main()
{
	char s1[] = "ZEBI";
	char *p1 = s1 + 4;
	char s2[4] = "ZEBI";
	char *p2 = s2 + 4;
	pi (p2[0]);
	ps("this is what my function does \n");
	memset(p1,65,3);
	pi(ft_memcmp(s1,s2,6));
	ps("this is what the original function does ");
	pi(memcmp(s1,s2,6));
}
