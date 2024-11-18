/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:13:50 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/20 00:17:07 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*set_prefix(char *flags)
{
	if (ft_strchr(flags, 'x'))
		return ("0x");
	else if (ft_strchr(flags, 'X'))
		return ("0X");
	return ("");
}

void	ft_handle_uint(char *flags, va_list args, int *res, const char *base)
{
	char			*str_to_print;
	char			*num_str;
	char			*prefix;
	unsigned int	num;

	num = va_arg(args, unsigned int);
	num_str = ft_itobase_uint(num, base);
	if (ft_strchr(flags, '#') && num != 0)
		prefix = set_prefix(flags);
	else
		prefix = "";
	if (is_zeropad(flags))
		str_to_print = ft_set_zeropadded_str(flags, num_str, prefix);
	else
		str_to_print = ft_set_flagged_str(flags, num_str, prefix);
	*res += write(1, str_to_print, ft_strlen(str_to_print));
	free(str_to_print);
	free(num_str);
}
