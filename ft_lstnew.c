/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:48:17 by aababach          #+#    #+#             */
/*   Updated: 2021/11/22 15:55:38 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	first;
	int	i = 10;
	first.content = &i;
	first.next = NULL;
	t_list	*head = &first;

//	head = malloc(sizeof(t_list));
	head->content = content;
	head->next = NULL;
//	printf("%d",*(int *)content);
	return (head);
}

int	main()
{
	int	a = 9;
	ft_lstnew(&a);
}
