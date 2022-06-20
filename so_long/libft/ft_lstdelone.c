/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyarikan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 23:41:21 by iyarikan          #+#    #+#             */
/*   Updated: 2022/01/21 20:56:58 by iyarikan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Parametre olarak bir eleman alır ve fonksyiona bir diğer
 paramtere olarak verilmiş olan ‘del’ fonksiyonunu kullanarak
 elemanın memorydeki yerini temizler. ‘Next’ in memorydeki yeri
 temizlenmiş olmamalıdır.
 #1. Free edilecek eleman.
 #2. İçeriği silmek için kullanılacak fonksiyonun adresi*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*#include <stdio.h>
void del1(void *lstdel)
{
    printf("fonksiyonda işlem gördükten sonrası...\n");
    return ;
}
int main(void)
{
    t_list *a,*b;
    a=(t_list*)malloc(sizeof(t_list));
    t_list **lst = malloc(sizeof(t_list *));
    *lst = a;
    a->content="fonksiyona gitmeden öncesi...";
    a->next=NULL;
    printf("%s\n", (char *)(*lst)->content);
    ft_lstdelone(a,del1);
}*/
