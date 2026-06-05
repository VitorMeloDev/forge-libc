/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfreitas <vfreitas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:53:44 by vfreitas          #+#    #+#             */
/*   Updated: 2026/06/05 13:58:26 by vfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstliter(t_list *lst, void (*f)(void *))
{
    while (lst != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}