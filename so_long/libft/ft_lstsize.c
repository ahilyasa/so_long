/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:47:28 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/20 18:35:43 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Listedeki eleman sayısını bulur.
 #1. Listenin başlangıcı*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	sayac;

	if (!lst)
		return (0);
	sayac = 0;
	while (lst)
	{
		sayac++;
		lst = lst->next;
	}
	return (sayac);
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

    *test = a;
    ft_lstsize(*test);
    printf("%d",ft_lstsize(*test));

}*/
