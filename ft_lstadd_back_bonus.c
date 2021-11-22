#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;
	temp = *lst;
	while (temp)
		temp = temp->next;
	temp = new;
	new->next = NULL;
	temp = *lst;
}

int	main()
{
	t_list	*head;

	t_list	n1, n2;
	int k,m,l;
	int	*nn1 = &k;
	*nn1 = 9;
	int	*nn2 = &l;
	*nn2 = 3;
	int	*neww = &m;
	*neww = 77;
	n1.content = nn1;
	n2.content = nn2;
	head = &n1;
	n1.next = &n2;
	t_list	ko;
	t_list *new = &ko;
	new->content = neww;
	t_list	**hh;
	hh = &head;
	ft_lstadd_back(hh,new);
	while (head)
	{
		pi(*((int *)head->content));
		head = head->next;
	}
}
