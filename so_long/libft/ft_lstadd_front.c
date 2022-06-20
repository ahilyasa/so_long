/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:13:33 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/21 20:50:01 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Listenin başına yeni bir eleman (‘new’) ekler.
 #1. Listenin ilk bağlantısının pointerının adresi.
 #2. Listeye ekelenecek olan elemanın pointerının adresi.*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>
#include <string.h>
int    main(void)
{
    t_list *a,*b,*c;
    a=malloc(sizeof(t_list));
    b=malloc(sizeof(t_list));
    c=malloc(sizeof(t_list));
    t_list **lst = malloc(sizeof(t_list *));
    *lst = a;
    a->content="ilknur";
    a->next=b;
    b->content="yarikan";
    b->next=NULL;
    
    
    c->content="Ahil";
    c->next=NULL;
    
    //printf("%s\n",(char *)(*lst)->content);
    printf("%s\n",(char *)lst[0]->content);
    
    ft_lstadd_front(lst, c);
    
    printf("%s\n",(char *)lst[0]->content);
    //printf("%s\n",(char *)(*lst)->content);
}*/
