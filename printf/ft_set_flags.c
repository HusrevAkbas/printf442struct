/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husrevakbas <husrevakbas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 23:38:00 by husrevakbas       #+#    #+#             */
/*   Updated: 2024/10/19 00:23:03 by husrevakbas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
	1) Each conversion specification is introduced by the character %, and ends
	with a conversion specifier.
	2) In between there may be (in this order)
		1- zero or more flags,				-0. #+
		2- an optional minimum field width,	any positiv number
		3- an optional precision and 		THE '.' FLAG
		4- an optional length modifier.		NOT INCLUDED
		5- convertion identifiers			cspdiuxX%
*/

int	set_flagset(char *flags, char **checkpoint, int i)
{
	while (ft_strchr(get_const("flags"), **checkpoint))
	{
		if (!ft_strchr(flags, **checkpoint))
		{
			flags[i] = **checkpoint;
			i++;
		}
		*checkpoint += 1;
	}
	return (i);
}

int	set_width(char *flags, char **checkpoint, int i)
{
	while (ft_isdigit(**checkpoint))
	{
		flags[i] = **checkpoint;
		i++;
		*checkpoint += 1;
	}
	return (i);
}

static int	set_prec(char *flags, char **checkpoint, int i)
{
	while (ft_isdigit(**checkpoint))
	{
		flags[i] = **checkpoint;
		i++;
		*checkpoint += 1;
	}
	return (i);
}

char	*set_flags(char **checkpoint)
{
	char	*flags;
	int		i;

	flags = ft_calloc(50, sizeof(char));
	if (flags == NULL)
		return (NULL);
	i = 0;
	i = set_flagset(flags, checkpoint, i);
	i = set_width(flags, checkpoint, i);
	if (**checkpoint == '.')
	{
		flags[i] = '.';
		i++;
		*checkpoint += 1;
	}
	i = set_prec(flags, checkpoint, i);
	if (ft_strchr(get_const("con_id"), **checkpoint))
	{
		flags[i] = **checkpoint;
		i++;
	}
	return (flags);
}
