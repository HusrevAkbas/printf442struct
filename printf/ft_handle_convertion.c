/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_convertion.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:34:47 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/13 20:28:10 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
	// DONT FORGET TO COUNT PRINTED CHARS
	// apply flags and print cspdiuxX%

void	ft_handle_convertion(char *flags, va_list args, int *res)
{
	if (ft_strchr(flags, '%'))
		*res += write(1, "%", 1);
	if (ft_strchr(flags, 'c'))
		ft_handle_char(flags, args, res);
	if (ft_strchr(flags, 'd') || ft_strchr(flags, 'i'))
		ft_handle_int(flags, args, res);
	if (ft_strchr(flags, 's'))
		ft_handle_string(flags, args, res);
	if (ft_strchr(flags, 'p'))
		ft_handle_pointer(flags, args, res);
	if (ft_strchr(flags, 'u'))
		ft_handle_uint(flags, args, res, get_const("decimal"));
	if (ft_strchr(flags, 'x'))
		ft_handle_uint(flags, args, res, get_const("hex_low"));
	if (ft_strchr(flags, 'X'))
		ft_handle_uint(flags, args, res, get_const("hex_up"));
}
