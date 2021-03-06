/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pfc_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 09:54:07 by ppatil            #+#    #+#             */
/*   Updated: 2017/04/16 09:55:18 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>
#include "ft_printf.h"

static char	*pfc_wchar(va_list ap)
{
	char	*rv;
	wint_t	wc;

	wc = va_arg(ap, wint_t);
	ft_wctoa_utf8(wc, &rv);
	return (rv);
}

char	*pfc_char(t_pf_arg arg, va_list ap)
{
	char	*rv;

	if (arg.len.l)
		return (pfc_wchar(ap));
	rv = (char *)ft_memalloc(1);
	*rv = (unsigned char)va_arg(ap, int);
	return (rv);
}
