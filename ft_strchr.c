/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfreitas <vfreitas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 09:43:50 by vfreitas          #+#    #+#             */
/*   Updated: 2026/05/27 09:55:06 by vfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	v;

	v = c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == v)
			return (&s[i]);
		i++;
	}
	if (s[i] == '\0' && v == '\0')
		return (&s[i]);
	return (NULL);
}
