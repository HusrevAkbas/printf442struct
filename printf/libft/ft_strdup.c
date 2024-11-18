/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:01:00 by huakbas           #+#    #+#             */
/*   Updated: 2024/09/13 14:01:03 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*pointer;
	size_t	i;

	pointer = (char *)malloc(ft_strlen(s) + 1);
	if (pointer == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		pointer[i] = s[i];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
