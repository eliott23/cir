/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:50:44 by aababach          #+#    #+#             */
/*   Updated: 2021/11/18 19:17:29 by aababach         ###   ########.fr       */
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

	i = 0 + s;
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

static void	ft_fill(int i, char *num, int n)
{
	if (i)
	{
		num[0] = 45;
		i = 1;
		if (i == 2)
			num[1] == '8';
	}
	while (n >= 10)
	{
		num[i++] = n % 10 + 48;
		n /= 10;
	}
	num[i++] = n + 48;
	num[i] = 0;
}

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	int		s;

	s = 0;
	if (n < 0)
	{
		s++;
		if (n == -2147483648)
		{
			s++;
			n = 214748364;
		}
		n *= -1;
	}
	i = 0 + s;
	num = malloc (sizeof(char) * ft_count_num(n) + 1 + s);
	if (!num)
		return (0);
	ft_fill(i, num, n);
	return (ft_rev_num(num, s, n));
}
