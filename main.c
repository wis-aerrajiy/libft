/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrajiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:28:44 by aerrajiy          #+#    #+#             */
/*   Updated: 2022/10/20 15:12:09 by aerrajiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void del(void *data)
{
    data = 0;
}


// int    main(void)
// {
//     t_list *d = malloc (sizeof (t_list));
//     t_list *e = malloc (sizeof (t_list));
    
//     t_list    *head;
//     t_list    *temp;
	
//     head = ft_lstnew("TEST01");
//     d->content = "TEST02";
//     e->content = "TEST03";
//     e->next = d->next = NULL;

//     ft_lstadd_back(&head, e);
//     ft_lstadd_front(&head, d);
    
//     temp = head;
    
//     while (temp)
//     {
//         printf ("%s\n", temp->content);
//         temp = temp->next;
//     }
    
//     ft_lstdelone (head, del);
//     printf("%p", head);
// }

// int main()
// {
    
//     t_list *list;
//     t_list *temp;
//     temp =list;
//     list = NULL;
//     for (size_t i = 0; i < 10; i++)
//     {
//         ft_lstadd_back(&list, ft_lstnew(ft_itoa(i)));
//     }
    
//     ft_lstadd_front(&list,  ft_lstnew(ft_itoa(50)));

//     ft_lstiter(list, f);
    
//     while (list)
//     {
//         printf("%s \n", list->content);
//         list = list->next;
//     }

// }