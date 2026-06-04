/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:52:30 by marvin            #+#    #+#             */
/*   Updated: 2026/06/04 19:52:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*current;

	current = (*lst);
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
}
