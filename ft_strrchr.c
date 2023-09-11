/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 06:56:33 by lde-mich          #+#    #+#             */
/*   Updated: 2023/01/23 15:36:35 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	*ptr;

	if (!c)
		return ((char *)&str[ft_strlen(str)]);
	ptr = (unsigned char *) str;
	i = 0;
	while (ptr[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (ptr[i] == (unsigned char) c)
			return ((char *) &str[i]);
		i--;
	}
	return (NULL);
}
