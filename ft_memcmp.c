/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:35:50 by aababach          #+#    #+#             */
/*   Updated: 2021/11/12 18:47:52 by aababach         ###   ########.fr       */
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
		ps("this is i ");
		pi(i);
		if (p1[i] != p2[i])
		{
			ps("this is p1[i] ");
			pi(p1[i]);
			ps("this is p2[i] ");
			pi(p2[i]);
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}

int	main()
{
	char s1[4] = "ZEBI";
	char *p1 = s1 + 4;
	char s2[4] = "ZEBI";
	char s3[4] = "ZEBI";
	char *p3 = s3 + 4;
	char *p2 = s2 + 4;
	pi(*p1);
	pi(*p2);
	pi(*p3);
	memset(p1,65,3);
	pi(*p1);
	pi(ft_memcmp(s1,s2,5));
	ps("\n");
	pi(memcmp(s1,s2,5));
}
