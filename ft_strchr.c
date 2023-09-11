/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 01:52:51 by lde-mich          #+#    #+#             */
/*   Updated: 2023/01/23 14:16:12 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	*ptr;

	if (!c)
		return ((char *)&str[ft_strlen(str)]);
	ptr = (unsigned char *) str;
	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (unsigned char) c)
			return ((char *) &str[i]);
		i++;
	}
	return (NULL);
}
