/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f64_expd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppatil <ppatil@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 14:26:07 by ppatil            #+#    #+#             */
/*   Updated: 2017/03/07 14:26:07 by ppatil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_float.h"

int	f64_expd(t_f64 f)
{
	return ((int)((52 - f64_expb(f)) * LOG_10_2));
}
