/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 23:58:52 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/21 20:43:31 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*’del’ ve free(3) kullanarak elemanı siler ve 
hafızadaki yerini temizler. Ayrıca silme işleminde 
elmanın tüm successorlarını da temizler. 
Sonuç olarak listenin pointerı NULL’ a ayarlanmalıdır.
 #1. Listedeki herangi bir elemanın pointerının adresi.
 #2. İçeriği silmek için kullanılacak fonksiyonun adresi.*/
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pos;

	if (!del)
		return ;
	while (*lst)
	{
		pos = *lst;
		*lst = pos->next;
		ft_lstdelone(pos, del);
	}
}
/*#include <unistd.h>
#include <stdio.h>
void del1(void *lstdel)
{
    printf("ben geldim");
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
    
    ft_lstclear(&a, del1);
    }*/
