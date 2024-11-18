/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:16:37 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/20 00:16:43 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*set_prefix(char *flags)
{
	char	*prefix;

	prefix = "";
	if (ft_strchr(flags, ' '))
		prefix = " ";
	if (ft_strchr(flags, '+'))
		prefix = "+";
	prefix = (char *) ft_strjoin(prefix, "0x");
	return (prefix);
}

void	ft_handle_pointer(char *flags, va_list args, int *res)
{
	char			*str_to_print;
	unsigned long	i;
	char			*num_str;
	char			*prefix;

	i = (unsigned long) va_arg(args, void *);
	if (i == 0)
	{
		str_to_print = ft_set_flagged_str(flags, "(nil)", "");
		*res += write(1, str_to_print, ft_strlen(str_to_print));
	}
	else
	{
		prefix = set_prefix(flags);
		num_str = ft_itobase_ul(i, get_const("hex_low"));
		if (is_zeropad(flags))
			str_to_print = ft_set_zeropadded_str(flags, num_str, prefix);
		else
			str_to_print = ft_set_flagged_str(flags, num_str, prefix);
		*res += write(1, str_to_print, ft_strlen(str_to_print));
		free(prefix);
		free(num_str);
	}
	free(str_to_print);
}
