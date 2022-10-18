/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:28:44 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/18 21:28:36 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void del(void *data)
{
    data = 0;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temps;

	if (*lst)
	{
		temps = ft_lstlast(*lst);
		temps->next = new;
	}
	else
		*lst = new;
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new != NULL)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

int    main(void)
{
    t_list *d = malloc (sizeof (t_list));
    t_list *e = malloc (sizeof (t_list));
    
    t_list    *head;
    t_list    *temp;
	
    head = ft_lstnew("TEST01");
    d->content = "TEST02";
    e->content = "TEST03";
    e->next = d->next = NULL;

    ft_lstadd_back(&head, e);
    ft_lstadd_front(&head, d);
    
    temp = head;
    
    while (temp)
    {
        printf ("%s\n", temp->content);
        temp = temp->next;
    }
    
    ft_lstdelone (head, del);
    printf("%p", head);
}