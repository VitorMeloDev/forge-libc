/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfreitas <vfreitas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 10:25:23 by vfreitas          #+#    #+#             */
/*   Updated: 2026/05/27 10:48:51 by vfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return (big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((little[j] != '\0' && big[i + j] != '\0')
			&& big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return (&big[i]);
		}
		i++;
	}
	return (NULL);
}
