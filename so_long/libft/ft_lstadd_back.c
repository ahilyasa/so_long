/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 23:21:15 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/21 17:00:04 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*’new’ elemanını listenin en sonuna ekler.
 #1. Listenin ilk elemanın pointerının adresini döner.
 #2. Listeye eklenecek olan elemanın adresini döner.*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	lastnode = ft_lstlast(*lst);
	if (!lastnode)
		*lst = new;
	else
		lastnode->next = new;
}
/*#include <stdio.h>
int main(void)
{
	t_list *a,*b,*c;
	a=malloc(sizeof(t_list));
	b=malloc(sizeof(t_list));
	c=malloc(sizeof(t_list));
	a->content="ilknur";
	a->next=b;
	b->content="yarikan";
	c->content="Ahil";
	c->next=NULL;
	ft_lstadd_back(&a,c);
	printf("%s\n",(char*)(ft_lstlast(a))->content);
}*/
