/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_zeropadded_str.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:23:46 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/20 00:17:35 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_set_zeropadded_str(char *flags, char *str, char *prefix)
{
	char	*str_new;
	int		i;
	size_t	width;
	size_t	length_str;
	size_t	length_prefix;

	i = 0;
	length_str = ft_strlen(str);
	length_prefix = ft_strlen(prefix);
	while (ft_strchr(get_const("flags"), flags[i]))
		i++;
	width = ft_atoi(&flags[i]);
	if (width < length_str + length_prefix)
		return (ft_set_flagged_str(flags, str, prefix));
	str_new = ft_calloc(width + 1, sizeof(char));
	if (str_new == NULL)
		return (NULL);
	ft_memset(str_new, '0', width);
	ft_memcpy(str_new + width - length_str, str, length_str);
	ft_memcpy(str_new, prefix, length_prefix);
	return (str_new);
}
