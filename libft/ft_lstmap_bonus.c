/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:55:40 by aababach          #+#    #+#             */
/*   Updated: 2021/11/28 19:10:38 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;

	result = 0;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		ft_lstadd_back(&result, temp);
		lst = lst->next;
	}
	return (result);
}
/*
int	main()
{
	t_list *first, *second, *third, *fourth;
	int num[4] = {1, 2, 3, 4};
	first = ft_lstnew(num);
	second = ft_lstnew(num + 1);
	third = ft_lstnew(num + 2);
	fourth = ft_lstnew(num + 3);

	first->next = second;
	second->next = third;
	third->next = fourth;

	ft_lstiter(first, fill);
	ft_lstiter(first, pii);

	t_list *new_list = ft_lstmap(first, time_cent, delete_value); 
	
	ft_lstiter(new_list, pii);

	return (0);
}*/
