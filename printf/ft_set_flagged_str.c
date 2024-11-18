/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flagged_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:23:46 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/20 00:33:33 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	get_width(char *flags, size_t len_str, size_t len_pfix)
{
	size_t	width;
	size_t	precision;
	int		i;

	i = 0;
	while (ft_strchr(get_const("flags"), flags[i]))
		i++;
	width = ft_atoi(&flags[i]);
	precision = get_precision(flags);
	if (width < len_str + len_pfix)
		width = len_str + len_pfix;
	if (precision + len_pfix > width && !ft_strchr(flags, 's'))
		width = precision + len_pfix;
	if (ft_strchr(flags, 'c') && width > 0)
		width--;
	return (width);
}

void	left_align(char *flags, char *str_new, char *str, char *prefix)
{
	size_t	precision;
	size_t	len_str;
	size_t	len_pfix;

	precision = get_precision(flags);
	len_str = ft_strlen(str);
	len_pfix = ft_strlen(prefix);
	if (precision > len_str + len_pfix && !ft_strchr(flags, 's'))
	{
		ft_memcpy(str_new, prefix, len_pfix);
		ft_memset(str_new + len_pfix, '0', precision - len_str);
		ft_memcpy(str_new + len_pfix + precision - len_str, str, len_str);
	}
	else
	{
		ft_memcpy(str_new + len_pfix, str, len_str);
		ft_memcpy(str_new, prefix, len_pfix);
	}
}

void	right_align(char *flags, char *str_new, char *str, char *prefix)
{
	size_t	precision;
	size_t	len_str;
	size_t	len_pfix;
	size_t	width;

	precision = get_precision(flags);
	len_str = ft_strlen(str);
	len_pfix = ft_strlen(prefix);
	width = get_width(flags, len_str, len_pfix);
	if (precision > len_str && !ft_strchr(flags, 's'))
	{
		ft_memcpy(str_new + (width - precision - len_pfix), prefix, len_pfix);
		ft_memset(str_new + (width - precision), '0', precision - len_str);
		ft_memcpy(str_new + (width - len_str), str, len_str);
	}
	else
	{
		ft_memcpy(str_new + (width - len_str - len_pfix), prefix, len_pfix);
		ft_memcpy(str_new + (width - len_str), str, len_str);
	}
}

char	*ft_set_flagged_str(char *flags, char *str, char *prefix)
{
	char	*str_new;
	size_t	width;
	size_t	len_str;
	size_t	len_pfix;

	len_str = ft_strlen(str);
	len_pfix = ft_strlen(prefix);
	width = get_width(flags, len_str, len_pfix);
	str_new = ft_calloc(width + 1, sizeof(char));
	if (str_new == NULL)
		return (NULL);
	ft_memset(str_new, ' ', width);
	if (ft_strchr(flags, '-'))
		left_align(flags, str_new, str, prefix);
	else
		right_align(flags, str_new, str, prefix);
	return (str_new);
}
