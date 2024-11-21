/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:08:58 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/11/21 13:00:48 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_string(t_flags *flags, va_list args, int *res)
{
	char	*str_to_print;
	char	*str;
	char	*substr;
	int		precision;

	str = va_arg(args, char *);
	precision = flags->precision;
	if (str)
	{
		if (flags->precision > 0 && precision < (int) ft_strlen(str))
		{
			substr = (char *) ft_substr(str, 0, precision);
			str_to_print = ft_set_flagged_str(flags, substr);
			free(substr);
		}
		else
			str_to_print = ft_set_flagged_str(flags, str);
	}
	else
		str_to_print = ft_set_flagged_str(flags, "(null)");
	*res += write(1, str_to_print, ft_strlen(str_to_print));
	free(str_to_print);
}
