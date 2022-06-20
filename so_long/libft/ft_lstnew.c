/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 21:52:58 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/21 20:42:43 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Malloc kullanarak memoryden yer ayırılır ve
 yeni element çıktı olarak verilir. 
 Content değişkeni ‘content’ parametresinin değeri 
 ile başlatılır. 
 Next değişkeni ise NULL değeri ile başlatılmalıdır.
 #1. Yeni element oluşturacağınız content değişkeni.*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelement;

	newelement = malloc(sizeof(t_list));
	if (!newelement)
		return (NULL);
	newelement->content = content;
	newelement->next = NULL;
	return (newelement);
}
/*#include <stdio.h>
int	main()
{
	char	*a = "ilknur";

	ft_lstnew(a);
	printf("%s", a);
}*/
