/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aababach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:55:40 by aababach          #+#    #+#             */
/*   Updated: 2021/11/23 17:44:35 by aababach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *a)
{
	a = NULL;
}

void	fill(void *a)
{
	*(int *)a *= 10;
}

void	pii(void *a)
{
	printf("%d\n", *(int *)a);
}

void	*time_cent(void *content)
{
	int *v = (int *)content;
	*v *= 100;
	return (v);
}


void	delete_value(void *con)
{
	con = 0;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;
	t_list	*first_element;

	result = 0;
	first_element = lst;
//	ft_lstiter(lst, f);
	while (lst)
	{
		lst->content = (*f)(lst->content);
		lst = lst->next;
	}
	lst = first_element;
	while (lst)
	{
		temp = ft_lstnew(lst->content);
		if (!temp)
		{
			ft_lstclear(&first_element, del);
			return (0);
		}
		ft_lstadd_back(&result, temp);
		lst = lst->next;
	}
	return (result);
}

/*int	main()
{
	t_list	n1,n2,n3,n4;
	int num[4] = {1, 2, 3, 4};
	t_list	*head;
	head = &n1;
	n1.next = &n2;
	n1.content = num;
	n2.next = &n3;
	n2.content = num + 1;
	n3.next = &n4;
	n2.content = num + 1;
	ft_lstiter(head, fill);
}
*/
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
}
*/
