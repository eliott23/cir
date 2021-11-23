#include "libft"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	int	len;
	t_list	*result;
	t_list	*temp;
	t_list	*temp2;

	temp2 = lst;
	len = ft_lstsize(lst);
	ft_lstiter(lst, f);
	while (lst)
	{
		temp = ft_lstnew(lst->content);
		if (!temp)
		{
			return (0);
		}
		ft_lstadd_back(result, temp);
		lst = lst->next;
	}
}
