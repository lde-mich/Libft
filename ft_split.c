/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 11:56:42 by lde-mich          #+#    #+#             */
/*   Updated: 2023/01/31 10:06:39 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

void	ft_while(char **final, const char *s, char c)
{
	int	i;
	int	k;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		k = 0;
		while (s[k] != c && s[k])
			k++;
		if (k == 0)
			break ;
		final[i] = (char *)malloc(sizeof(char) * (k + 1));
		if (!final[i])
			return ;
		k = 0;
		while (*s != c && *s)
			final[i][k++] = *s++;
		final[i][k] = '\0';
		i++;
	}
	final[i] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**final;

	if (!s)
		return (NULL);
	final = (char **)malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!final)
		return (NULL);
	ft_while(final, s, c);
	return (final);
}
