/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f64_expb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 14:24:43 by ppatil            #+#    #+#             */
/*   Updated: 2017/03/07 14:24:43 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_float.h"

int	f64_expb(t_f64 f)
{
	t_f64bits	bits;

	bits.f = f;
	return (bits.p.e - 1023);
}
