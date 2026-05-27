/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfreitas <vfreitas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 09:57:43 by vfreitas          #+#    #+#             */
/*   Updated: 2026/05/27 10:11:27 by vfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;
	size_t	i;

	size = 0;
	while (s[size] != '\0')
		size++;
	i = 0;
	while (i <= size)
	{
		if (s[size - i] == c)
			return (&s[size - i]);
		i++;
	}
	return (NULL);
}
