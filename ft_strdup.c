/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:52:32 by lde-mich          #+#    #+#             */
/*   Updated: 2023/01/25 01:45:52 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*ptr;
	int		i;

	len = ft_strlen(s1);
	ptr = (char *) malloc((len + 1) * sizeof(char));
	if (ptr == '\0')
		return (NULL);
	i = 0;
	while (i <= len)
	{
		ptr[i] = s1[i];
		i++;
	}
	return (ptr);
}
