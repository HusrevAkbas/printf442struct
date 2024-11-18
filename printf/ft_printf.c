/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:25:49 by huakbas           #+#    #+#             */
/*   Updated: 2024/10/20 00:58:44 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_substr(char *format, char **checkpoint, int *res)
{
	char	*str;

	str = ft_substr(format, 0, *checkpoint - format);
	*checkpoint += 1;
	*res += write(1, str, ft_strlen(str));
	free(str);
}

void	check_flags_handle(char **checkpoint, va_list args, int *res)
{
	char	*flags;
	char	*set_back_checkpoint;

	set_back_checkpoint = *checkpoint;
	flags = (char *) set_flags(checkpoint);
	*checkpoint += 1;
	if (flags == NULL)
		return ;
	if (*flags && ft_strchr(get_const("con_id"), flags[ft_strlen(flags) - 1]))
		ft_handle_convertion(flags, args, res);
	else
	{
		*res += write(1, "%", 1);
		*checkpoint = set_back_checkpoint;
	}
	free(flags);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		res;
	char	*checkpoint;

	if (!format)
		return (-1);
	res = 0;
	va_start(args, format);
	while (*format)
	{
		checkpoint = ft_strchr(format, '%');
		if (!checkpoint)
			return (res += write(1, (char *) format, ft_strlen(format)));
		print_substr((char *) format, &checkpoint, &res);
		check_flags_handle(&checkpoint, args, &res);
		format = checkpoint;
	}
	va_end(args);
	return (res);
}
