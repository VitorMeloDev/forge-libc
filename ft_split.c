/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 18:47:27 by marvin            #+#    #+#             */
/*   Updated: 2026/06/03 13:03:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		vm_words(char const *s, char c);
char	*add_str(char const *str, int start, int end);

char	**ft_split(char const *s, char c)
{
	char		**arr;
	size_t		i;
	size_t		start;
	int			id_matrix;

	arr = malloc(sizeof(char *) * vm_words(s, c) + 1);
	if (!arr)
		return (NULL);
	i = -1;
	start = 0;
	id_matrix = 0;
	while (i++ <= ft_strlen(s))
	{
		if (s[i] == '\0' || s[i] == c)
		{
			if (i > start)
			{
				arr[id_matrix] = add_str(s, start, i);
				id_matrix++;
			}
			start = i + 1;
		}
	}
	arr[id_matrix + 1] = NULL;
	return (arr);
}

char	*add_str(char const *str, int start, int end)
{
	char	*s;
	int		i;

	s = malloc(sizeof(char) * (end - start + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (start < end)
	{
		s[i] = str[start];
		i++;
		start++;
	}
	s[i] = '\0';
	return (s);
}

int	vm_words(char const *s, char c)
{
	int	words;
	int	i;

	if (!s)
		return (0);
	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}
