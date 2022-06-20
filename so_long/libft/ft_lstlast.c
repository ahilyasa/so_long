/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 23:07:44 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/20 18:36:32 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Listenin son elemanın döner.
 #1. Listenin başlangıcı*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*#include <stdio.h>
int main()
{
    t_list **test = malloc(sizeof(t_list *));;
    t_list *a = malloc(sizeof(t_list));
    t_list *b= malloc(sizeof(t_list));
    t_list *c= malloc(sizeof(t_list));
    a->next = b;
    b->content = "ilknur";
    b->next = c;
	c->content = "yarikan";
	c->next = NULL;

    *test = a;
    ft_lstlast(a);

}*/
