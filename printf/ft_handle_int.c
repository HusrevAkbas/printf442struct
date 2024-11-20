/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huakbas <huakbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:05:12 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/11/20 17:57:48 by huakbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_zeropad(t_flags *flags)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (flags->minus == 1)
		return (0);
	if (flags->zero == 1)
		res = 1;
	i++;
	return (res);
}

void	ft_handle_int(t_flags *flags, va_list args, int *res)
{
	char	*str_to_print;
	char	*num_str;
	char	*prefix;
	int		num;

	num = va_arg(args, int);
	num_str = ft_itoa(num);
	if (num < 0)
	{
		free(flags->prefix);
		flags->prefix = ft_strdup("-");
		ft_memmove(num_str, &num_str[1], ft_strlen(num_str));
	}
	else if (flags->plus == 1 && num >= 0)
	{
		free(flags->prefix);
		flags->prefix = ft_strdup("+");
	}
	else if (flags->space == 1 && num >= 0)
	{
		free(flags->prefix);
		flags->prefix = ft_strdup(" ");
	}
	if (flags->zero && !flags->minus && !flags->precision)
		str_to_print = ft_set_zeropadded_str(flags, num_str);
	else
		str_to_print = ft_set_flagged_str(flags, num_str);
	if (str_to_print)
		*res += write(1, str_to_print, ft_strlen(str_to_print));
	free(num_str);
	free(str_to_print);
}
