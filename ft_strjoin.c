/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 06:15:18 by lde-mich          #+#    #+#             */
/*   Updated: 2023/02/01 15:08:13 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return ((char *) s2);
	if (!s2)
		return ((char *) s1);
	str1 = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str1)
		return (0);
	i = -1;
	while (s1[++i])
		str1[i] = s1[i];
	j = 0;
	while (s2[j])
		str1[i++] = s2[j++];
	str1[i] = '\0';
	return (str1);
}
