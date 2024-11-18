/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:08:58 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/20 00:22:41 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_precision(char *flags)
{
	int	i;
	int	precision;

	i = 0;
	precision = 0;
	while (flags[i])
	{
		if (flags[i] == '.')
			precision = ft_atoi(&flags[i + 1]);
		i++;
	}
	return (precision);
}

void	ft_handle_string(char *flags, va_list args, int *res)
{
	char	*str_to_print;
	char	*str;
	char	*substr;
	int		precision;

	str = va_arg(args, char *);
	precision = get_precision(flags);
	if (str)
	{
		if (ft_strchr(flags, '.') && precision < (int) ft_strlen(str))
		{
			substr = (char *) ft_substr(str, 0, precision);
			str_to_print = ft_set_flagged_str(flags, substr, "");
			free(substr);
		}
		else
			str_to_print = ft_set_flagged_str(flags, str, "");
	}
	else
		str_to_print = ft_set_flagged_str(flags, "(null)", "");
	*res += write(1, str_to_print, ft_strlen(str_to_print));
	free(str_to_print);
}
