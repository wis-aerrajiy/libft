#include "libft.h"

int main()
{
    t_list a;
    t_list b;
    t_list c;

    t_list *head;
    t_list *temp;

    a.content = "A";
    a.next = &b;
    b.content = "B";
    b.next = NULL;

    c.content = "C";

    head = &a;
    // printf ("%d", ft_lstsize(head));

    ft_lstadd_back(&head, &c);
    
    temp = head;

    while (temp)
    {
        printf ("%s\n", temp->content);
        temp = temp->next;
    }
    
}