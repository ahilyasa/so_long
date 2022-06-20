/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 00:12:23 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/21 20:44:07 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Listenin üzerinde dolanır ve ‘f’ fonksiyonunu 
 listenin her elemanının içeriğine uygular.
 #1. Listedeki herangi bir elemanın pointerının adresi.
 #2. Listenin içerisinde gezinmek için kullanılacak olan 
 fonksyionun adresi.*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*#include <stdio.h>
void f(void *lst)
{
    printf("geldim  ");
    return ;
}
int main()
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
    b->next=c;
    c->content="Ahil";
    c->next=NULL;
    
    ft_lstiter(a, f);
}*/
