/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:50:44 by aababach          #+#    #+#             */
/*   Updated: 2021/11/18 18:11:31 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_num(int n)
{
	int	nbr;

	nbr = 1;
	if (n < 0)
		n *= -1;
	if (n >= 10)
	{
		while (n >= 10)
		{
			n = n / 10;
			nbr += 1;
		}
		return (nbr);
	}
	return (1);
}

static char	*ft_rev_num(char *num, int s, int n)
{
	int	len;
	int	i;
	int	temp;

	i = 0;
	if (s)
	{
		num[0] = 45;
		i = 1;
	}
	ps("this is num ");
	ps(num);
	len = ft_count_num(n) - 1 + i;
	while (len >= i)
	{
		temp = num[i];
		num[i] = num[len];
		num[len] = temp;
		len--;
		i++;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		s_n;
	int		i;
	int		s;

	s_n = n;
	s = 0;
	if (n < 0)
	{
		n *= -1;
		s = 1;
	}
	i = 0 + s;
	num = malloc (sizeof(char) * ft_count_num(n) + 1 + s);
	if (!num)
		return (0);
	while (n >= 10)
	{
		num[i] = n % 10 + 48;
		i++;
		n /= 10;
	}
	num[i] = n + 48;
	i++;
	num[i] = 0;
	return (ft_rev_num(num, s, s_n));
}

int	main()
{
	int	i = -2147483648;
	ps(ft_itoa(i));
//	char	z[] = "zebi";
//	ps(ft_rev_num(z,0,1111));
}
